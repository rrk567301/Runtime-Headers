@class MAParallelProgress;

@interface MAParallelProgressReporter : MAProgressReporter

@property (readonly, nonatomic) MAParallelProgress *parallelProgress;
@property (readonly, nonatomic) unsigned long long index;

- (void).cxx_destruct;
- (char)isCancelled;
- (char)isCancelledWithProgress:(double)a0;
- (id)initWithParallelProgress:(id)a0 index:(unsigned long long)a1;
- (id)childProgressWithOffset:(double)a0 scale:(double)a1;
- (char)isCancelledWithProgress:(double)a0 currentTime:(double)a1;

@end
