@interface MALegacyProgressReporter : MAProgressReporter {
    double _lastProgressCallTime;
}

@property (nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) id /* block */ progressBlock;

- (id)initWithProgressBlock:(id /* block */)a0;
- (BOOL)isCancelledWithProgress:(double)a0 currentTime:(double)a1;
- (void).cxx_destruct;
- (id)childProgressWithOffset:(double)a0 scale:(double)a1;

@end
