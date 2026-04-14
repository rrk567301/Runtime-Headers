@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface RTTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
}

@property (readonly) NSString *identifier;

- (void)dealloc;
- (id)init;
- (void)resume;
- (void)invalidate;
- (void).cxx_destruct;
- (void)cancel;
- (void)suspend;
- (id)initWithIdentifier:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (id)initWithIdentifier:(id)a0 dispatchSource:(id)a1;
- (void)fireWithInterval:(double)a0;
- (void)fireWithInterval:(double)a0 leeway:(double)a1;
- (void)fireAfterDelay:(double)a0;
- (void)fireAfterDelay:(double)a0 interval:(double)a1;
- (void)fireAfterDelay:(double)a0 interval:(double)a1 leeway:(double)a2;

@end
