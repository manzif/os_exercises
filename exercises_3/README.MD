Although switch polling is simple, it has several disadvantages:

    • It uses a lot of CPU resource even when there are no changes in the inputs. In reality,
    most modern embedded systems are often idle and polling would unnecessary drain their
    battery.
    • The loop cycle time is variable (e.g. due to conditional statements). Therefore the
    sampling interval of the inputs is not constant and is said to jitter.
    • If the loop cycle is ever too long, input changes could be missed and data lost. The delay
    gets longer as more code is added.
    This exercise aims to address some of these issues. It uses timers to create non-blocking delays
    and interrupts to asynchronously detect when a switch is pressed and released.
