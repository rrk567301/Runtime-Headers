@class NSRunLoop;

@interface CalCancelablePerformSelector : NSObject <CalCancelable>

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSRunLoop *runloop;

- (id)initWithBlock:(id /* block */)a0;
- (void)cancel;
- (void)_performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performAfterDelay:(double)a0;

@end
