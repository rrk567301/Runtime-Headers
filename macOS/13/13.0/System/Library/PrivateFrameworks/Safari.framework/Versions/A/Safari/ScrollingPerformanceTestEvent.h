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
- (struct __CGEvent { } *)CGEvent;
- (struct CGPoint { double x0; double x1; })locationInWindow;
- (double)deltaY;
- (double)deltaX;
- (double)deltaZ;
- (BOOL)hasPreciseScrollingDeltas;
- (double)scrollingDeltaX;
- (double)scrollingDeltaY;
- (double)_unacceleratedScrollingDeltaX;
- (double)_unacceleratedScrollingDeltaY;
- (unsigned int)_scrollCount;
- (unsigned long long)momentumPhase;
- (BOOL)isDirectionInvertedFromDevice;
- (unsigned long long)phase;
- (id)initWithWindow:(id)a0 deltaY:(double)a1 phase:(unsigned long long)a2 momentumPhase:(unsigned long long)a3;

@end
