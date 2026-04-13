@interface CADynamicFrameRateSource : NSObject {
    struct DynamicFrameRateSource { void *x0; struct CAFrameRateRange { float x0; float x1; float x2; } x1; struct CAFrameIntervalRange { unsigned int x0; unsigned int x1; unsigned int x2; } x2; unsigned long long x3; int x4; unsigned char x5 : 1; } *_impl;
}

@property (nonatomic) struct CAFrameRateRange { float x0; float x1; float x2; } preferredFrameRateRange;
@property (nonatomic, getter=isPaused) BOOL paused;

- (void)dealloc;
- (void)setHighFrameRateReasons:(const unsigned int *)a0 count:(unsigned long long)a1;
- (id)initWithDisplay:(id)a0;
- (double)commitDeadline;
- (double)commitDeadlineAfterTimestamp:(double)a0;
- (BOOL)shiftFramePhaseBy:(double)a0;

@end
