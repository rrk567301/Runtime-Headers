@class NSBackgroundActivityScheduler;

@interface SAActivity : NSObject

@property (retain) NSBackgroundActivityScheduler *activity;
@property (copy) id /* block */ completionHandler;
@property BOOL deferActivity;
@property BOOL shouldStop;

+ (id)newWithActivity:(id)a0 andCompletionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (BOOL)shouldDefer;
- (id)initWithActivity:(id)a0 completionHandler:(id /* block */)a1;
- (void)setActivityResult:(long long)a0;

@end
