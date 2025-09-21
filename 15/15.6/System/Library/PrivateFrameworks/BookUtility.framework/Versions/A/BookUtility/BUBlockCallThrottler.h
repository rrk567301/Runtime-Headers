@class NSDate;

@interface BUBlockCallThrottler : NSObject

@property (retain, nonatomic) NSDate *lastBlockCallDate;
@property (nonatomic) char running;
@property (nonatomic) double minimumTimeBetweenCalls;

- (id)init;
- (void).cxx_destruct;
- (void)runBlock:(id /* block */)a0;
- (char)_runBlock:(id /* block */)a0 throttle:(char)a1;
- (char)runBlockThrottled:(id /* block */)a0;

@end
