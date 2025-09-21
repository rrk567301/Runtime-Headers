@interface MAIgnoreProgressReporter : MAProgressReporter

- (id)init;
- (char)isCancelled;
- (id)childProgressReporterForStep:(unsigned long long)a0 outOf:(unsigned long long)a1;
- (id)childProgressReporterFromStart:(double)a0 toEnd:(double)a1;
- (char)isCancelledWithProgress:(double)a0 currentTime:(double)a1;

@end
