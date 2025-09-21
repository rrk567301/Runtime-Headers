@interface MALegacyProgressReporter : MAProgressReporter {
    double _lastProgressCallTime;
}

@property (nonatomic) char isCancelled;
@property (readonly, nonatomic) id /* block */ progressBlock;

- (void).cxx_destruct;
- (id)initWithProgressBlock:(id /* block */)a0;
- (id)childProgressWithOffset:(double)a0 scale:(double)a1;
- (char)isCancelledWithProgress:(double)a0 currentTime:(double)a1;

@end
