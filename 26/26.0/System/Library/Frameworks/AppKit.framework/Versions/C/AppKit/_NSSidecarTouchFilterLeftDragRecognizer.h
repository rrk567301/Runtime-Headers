@interface _NSSidecarTouchFilterLeftDragRecognizer : _NSSidecarTouchFilterRecognizer {
    long long _trackingIdx;
    long long _tapCount;
    struct CGPoint { double x; double y; } _initialWinLoc;
    struct CGPoint { double x; double y; } _currentWinLoc;
    unsigned long long _lastUpTimestamp;
    unsigned char _postedMouseDown : 1;
}

- (void)clearTimer;
- (void)action;
- (void)enoughTimeElapsed:(id)a0;
- (void)reset;
- (void)startTimer;
- (id)init;
- (void)endRecognitionCGEvent:(struct __CGEvent { } *)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (void)failRecognition;
- (void)handlePossibleCGEvent:(struct __CGEvent { } *)a0 hidEvent:(struct __IOHIDEvent { } *)a1;
- (void)handleCGEvent:(struct __CGEvent { } *)a0 hidEvent:(struct __IOHIDEvent { } *)a1;
- (void)handleRecognizedCGEvent:(struct __CGEvent { } *)a0 hidEvent:(struct __IOHIDEvent { } *)a1;
- (void)postMouseDown;

@end
