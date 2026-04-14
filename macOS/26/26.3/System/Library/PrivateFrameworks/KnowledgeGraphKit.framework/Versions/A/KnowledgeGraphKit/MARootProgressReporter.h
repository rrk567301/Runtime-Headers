@interface MARootProgressReporter : MAProgressReporter {
    double _lastProgressCallTime;
}

@property (readonly, nonatomic) id /* block */ progressBlock;
@property BOOL isCancelled;
@property (readonly) double progress;

- (id)init;
- (BOOL)isCancelledWithProgress:(double)a0 currentTime:(double)a1;
- (void)cancelOperation;
- (void).cxx_destruct;
- (id)childProgressWithOffset:(double)a0 scale:(double)a1;
- (id)initWithProgressBlock:(id /* block */)a0;

@end
