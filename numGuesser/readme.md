#Algorithm for number guess game

```
main():
    make a 20-length character array called userName 
    make integer called guess 
    make integer called correct
    make an integer called turns, initialize it to 0
    make an integer (boolean) called keepGoing start as true(-1)

    seed random number generator
    generate a random number between 1 and 100 and put in correct
    ask user name put in userName
    greet user with name

    while keepGoing is true:
        increment turns
        ask user for a number and put it in guess
        if guess < correct:
            tell user it is "Too low"
        elif guess > correct:
            tell user it is "Too high"
        else:
            tell them "You win!"
            set keepGoing to false

    evaluate the user performance
    if turns < 7:
        say "That's great"
    elif turns > 7:
        say "You could do better"
    else:
        say "Good job"
```
