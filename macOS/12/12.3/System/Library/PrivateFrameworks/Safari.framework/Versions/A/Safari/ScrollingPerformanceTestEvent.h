@interface ScrollingPerformanceTestEvent : NSEvent {
    struct CGPoint { double x; double y; } _safari_locationInWindow;
    struct CGPoint { double x; double y; } _safari_location;
    double _safari_deltaY;
    unsigned long long _safari_phase;
    unsigned long long _safari_momentumPhase;
    double _safari_timestamp;
}

- (unsigned long long)type;
- (struct CGPoint { double x0; double x1; })location;
- (double)timestamp;
- (double)deltaX;
- (double)deltaY;
- (struct CGPoint { double x0; double x1; })locationInWindow;
- (unsigned long long)phase;
- (struct __CGEvent { } *)CGEvent;
- (double)scrollingDeltaX;
- (unsigned long long)momentumPhase;
- (double)scrollingDeltaY;
- (BOOL)hasPreciseScrollingDeltas;
- (double)deltaZ;
- (unsigned int)_scrollCount;
- (double)_unacceleratedScrollingDeltaX;
- (double)_unacceleratedScrollingDeltaY;
- (BOOL)isDirectionInvertedFromDevice;
- (id)initWithWindow:(id)a0 deltaY:(double)a1 phase:(unsigned long long)a2 momentumPhase:(unsigned long long)a3;

@end
