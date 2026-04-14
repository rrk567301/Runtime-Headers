@interface MARootProgressReporter : MAProgressReporter {
    double _lastProgressCallTime;
}

@property (readonly, nonatomic) id /* block */ progressBlock;
@property BOOL isCancelled;
@property (readonly) double progress;

- (id)childProgressWithOffset:(double)a0 scale:(double)a1;
- (id)initWithProgressBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isCancelledWithProgress:(double)a0 currentTime:(double)a1;
- (id)init;
- (void)cancelOperation;

@end
