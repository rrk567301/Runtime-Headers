@class NSString;

@interface RMTimedDispatch : NSObject

@property (copy) id /* block */ timerCompletionBlock;
@property (retain) NSString *timerID;
@property BOOL complete;

+ (id)timedDispatchAfterInterval:(double)a0 completionBlock:(id /* block */)a1;

- (void)cancel;
- (void).cxx_destruct;
- (id)initAfterInterval:(double)a0 completionBlock:(id /* block */)a1;

@end
