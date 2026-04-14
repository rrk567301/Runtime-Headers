@interface _NSSidecarTouchFilterRightTapRecognizer : _NSSidecarTouchFilterRecognizer {
    struct CGPoint { double x; double y; } _initialWinLoc;
    unsigned char _foundTwoTouches : 1;
    unsigned char _timerStarted : 1;
}

- (void)action;
- (void)reset;
- (void)failRecognition;
- (void)clearTimer;
- (void)handleCGEvent:(struct __CGEvent { } *)a0 hidEvent:(struct __IOHIDEvent { } *)a1;
- (void)startTimer;
- (void)tooMuchTimeElapsed:(id)a0;

@end
