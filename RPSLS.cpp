#include <iostream>
#include <cstdlib> //s/rand() l124
#include <ctime> //time() l124
#include <chrono> //chrono l9
#include <thread> //this_thread l9

//sleepytime function (milliseconds)
void sleepytime(int ms) {
std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

//main title
void main_title() {
using namespace std;
sleepytime(250);
cout << R"(
__________ __
\______ \ ____ ____ | | __
| _// _ \_/ ___\| |/ /
| | ( <_> ) \___| <
|____|_ /\____/ \___ >__|_ \
\/ \/ \/ )";
sleepytime(250);
cout << R"(
__________
\______ \_____ ______ ___________
| ___/\__ \ \____ \_/ __ \_ __ \
| | / __ \| |_> > ___/| | \/
|____| (____ / __/ \___ >__|
\/|__| \/ )";
sleepytime(250);
cout << R"(
_________ .__
/ _____/ ____ |__| ______ _________________ ______
\_____ \_/ ___\| |/ ___// ___/ _ \_ __ \/ ___/
/ \ \___| |\___ \ \___ ( <_> ) | \/\___ \
/_______ /\___ >__/____ >____ >____/|__| /____ >
\/ \/ \/ \/ \/ )";
sleepytime(250);
cout << R"(
.____ .__ .___
| | |__|____________ _______ __| _/
| | | \___ /\__ \\_ __ \/ __ |
| |___| |/ / / __ \| | \/ /_/ |
|_______ \__/_____ \(____ /__| \____ |
\/ \/ \/ \/ )";
sleepytime(250);
cout << R"(
_________ __
/ _____/_____ ____ ____ | | __
\_____ \\____ \ / _ \_/ ___\| |/ /
/ \ |_> > <_> ) \___| <
/_______ / __/ \____/ \___ >__|_ \
\/|__| \/ \/
)";
}

//win message
void win_con() {
using namespace std;
int sleeptime = 75;
cout << R"(__/\\\________/\\\_______/\\\\\_______/\\\________/\\\_
)"; sleepytime(sleeptime);
cout << R"( _\///\\\____/\\\/______/\\\///\\\____\/\\\_______\/\\\_
)"; sleepytime(sleeptime);
cout << R"( ___\///\\\/\\\/______/\\\/__\///\\\__\/\\\_______\/\\\_
)"; sleepytime(sleeptime);
cout << R"( _____\///\\\/_______/\\\______\//\\\_\/\\\_______\/\\\_
)"; sleepytime(sleeptime);
cout << R"( _______\/\\\_______\/\\\_______\/\\\_\/\\\_______\/\\\_
)"; sleepytime(sleeptime);
cout << R"( _______\/\\\_______\//\\\______/\\\__\/\\\_______\/\\\_
)"; sleepytime(sleeptime);
cout << R"( _______\/\\\________\///\\\__/\\\____\//\\\______/\\\__
)"; sleepytime(sleeptime);
cout << R"( _______\/\\\__________\///\\\\\/______\///\\\\\\\\\/___
)"; sleepytime(sleeptime);
cout << R"( _______\///_____________\/////__________\/////////_____
)"; sleepytime(sleeptime);
cout << R"(__/\\\______________/\\\_______/\\\\\_______/\\\\\_____/\\\_____/\\
\____
)"; sleepytime(sleeptime);
cout << R"( _\/\\\_____________\/\\\_____/\\\///\\\____\/\\\\\\___\/\\\___/\\\\
\\\__
)"; sleepytime(sleeptime);
cout << R"( _\/\\\_____________\/\\\___/\\\/__\///\\\__\/\\\/\\\__\/\\\__/\\\\
\\\\\_
)"; sleepytime(sleeptime);
cout << R"( _\//\\\____/\\\____/\\\___/\\\______\//\\\_\/\\\//\\\_\/\\\_\//\\
\\\\\__
)"; sleepytime(sleeptime);
cout << R"( __\//\\\__/\\\\\__/\\\___\/\\\_______\/\\\_\/\\\\//\\\\/\\
\__\//\\\\\___
)"; sleepytime(sleeptime);
cout << R"( ___\//\\\/\\\/\\\/\\\____\//\\\______/\\\__\/\\\_\//\\\/\\
\___\//\\\____
)"; sleepytime(sleeptime);
cout << R"( ____\//\\\\\\//\\\\\______\///\\\__/\\\____\/\\\__\//\\\\\
\____\///_____
)"; sleepytime(sleeptime);
cout << R"( _____\//\\\__\//\\\_________\///\\\\\/_____\/\\\___\//\\\\
\_____/\\\____
)"; sleepytime(sleeptime);
cout << R"(
______\///____\///____________\/////_______\///_____\/////_____\///_____
)"; sleepytime(sleeptime);
}

//skill issue
void skill_issue() {
using namespace std;
sleepytime(500);
cout << R"(
______ __ __ __ __ __
/\ ___\ /\ \/ / /\ \ /\ \ /\ \
\ \___ \ \ \ _"-. \ \ \ \ \ \____ \ \ \____
\/\_____\ \ \_\ \_\ \ \_\ \ \_____\ \ \_____\
\/_____/ \/_/\/_/ \/_/ \/_____/ \/_____/
)"; sleepytime(500); cout << R"(
__ ______ ______ __ __ ______
/\ \ /\ ___\ /\ ___\ /\ \/\ \ /\ ___\
\ \ \ \ \___ \ \ \___ \ \ \ \_\ \ \ \ __\
\ \_\ \/\_____\ \/\_____\ \ \_____\ \ \_____\
\/_/ \/_____/ \/_____/ \/_____/ \/_____/
)";
}

//player win check
bool playerwin(int playerChoice,int computerChoice) {
if (
(playerChoice == 0 && computerChoice == 2) || // rock crushes scissors
(playerChoice == 0 && computerChoice == 3) || // rock crushes lizard
(playerChoice == 1 && computerChoice == 0) || // paper covers rock
(playerChoice == 1 && computerChoice == 4) || // paper disproves spock
(playerChoice == 2 && computerChoice == 1) || // scissors cuts paper
(playerChoice == 2 && computerChoice == 3) || // scissors decapitates lizard
(playerChoice == 3 && computerChoice == 1) || // lizard eats paper
(playerChoice == 3 && computerChoice == 4) || // lizard poisons spock
(playerChoice == 4 && computerChoice == 0) || // spock vaporizes rock
(playerChoice == 4 && computerChoice == 2) ) // spock smashes scissors
{
return true;
}
else {
return false;
}
}

using namespace std;
int main() {
// SRNG
srand(time(0));
// string array
string choices[5] = { "Rock", "Paper", "Scissors", "Lizard", "Spock" };

int playerScore = 0;
int computerScore = 0;
char playAgain = 'n';

main_title();
sleepytime(500);

cout << "Rules:\n";
cout << " Scissors cuts Paper\n";
cout << " Paper covers Rock\n";
cout << " Rock crushes Lizard\n";
cout << " Lizard poisons Spock\n";
cout << " Spock smashes Scissors\n";
cout << " Scissors decapitates Lizard\n";
cout << " Lizard eats Paper\n";
cout << " Paper disproves Spock\n";
cout << " Spock vaporizes Rock\n";
cout << " Rock crushes Scissors\n\n";

//game loop
do {
int playerChoice;
bool validInput = false;

//take choice input & validate
    do {
    cout << "Choose your move:\n";
    cout << "1. Rock\n2. Paper\n3. Scissors\n4. Lizard\n5. Spock\n";
    cout << "Enter (1-5): ";
    cin >> playerChoice;
    if (playerChoice >= 1 && playerChoice <= 5) {
        validInput = true;
        }
    else {
        cout << "Invalid choice! Please enter 1-5.\n\n";
        }
    } while (!validInput);

    // random 1-5
    int computerChoice = (rand() % 5) + 1;

    // adjust for base 0
    playerChoice--;
    computerChoice--;

    // cout choices
    cout << "\nYou chose: " << choices[playerChoice] << endl;
    cout << "Computer chose: " << choices[computerChoice] << endl;

// win cons
    //tie
    if (playerChoice == computerChoice) {
    cout << "It's a tie!\n";
    }
    //player wins
    else if (playerwin(playerChoice, computerChoice) == true) {
    cout << "You win this round!\n";
    playerScore++;
    }
    //player loses
    else {
    cout << "Computer wins this round!\n";
    computerScore++;
    }

// show current score
    cout << "\nScore -> You: " << playerScore << " | Computer: " <<
    computerScore << "\n\n";

// ask to play again
    cout << "Play another round? (y/n): ";
    cin >> playAgain;
    cout << "\n";
} while (playAgain == 'y' || playAgain == 'Y');

//inject score if needed
// if (true) {
// playerScore = ;
// computerScore = ;
// }

// final result
cout << "-----------------\n";
cout << " FINAL SCORE\n";
cout << "-----------------\n\n";
cout << "You: " << playerScore << " | Computer: " << computerScore << "\n";

//if win
if (playerScore > computerScore) {
    cout << "\n";
    win_con();
}

//if player gets gapped
else if (playerScore > 0 &&
    ((static_cast<double>(computerScore)/static_cast<double>(playerScore)) >= 2) ||
    ((computerScore - playerScore) >= 5) && playerScore >= 5){
    skill_issue();
}

//regular lose
else if (computerScore > playerScore) {
    cout << "\nyou lost :(";
}

//draw
else {
    cout << "\neh.... it's a draw :/";
}

cout << "\n\nThanks for playing!\n";
system("pause");
return 0;
}