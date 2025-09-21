@interface AXThreadTimerTask : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic, getter=isCancelled) char cancel;
@property (nonatomic, getter=isFinished) char finished;
@property (nonatomic, getter=isActive) char active;

- (void)run;
- (void).cxx_destruct;
- (void)runAfterDelay:(float)a0;

@end
