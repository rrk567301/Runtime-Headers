@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface RTTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
}

@property (readonly) NSString *identifier;

- (void)invalidate;
- (void)cancel;
- (void)fireAfterDelay:(double)a0;
- (void)suspend;
- (id)init;
- (void)fireWithInterval:(double)a0 leeway:(double)a1;
- (void)resume;
- (id)initWithIdentifier:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)fireAfterDelay:(double)a0 interval:(double)a1;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 dispatchSource:(id)a1;
- (void)dealloc;
- (void)fireAfterDelay:(double)a0 interval:(double)a1 leeway:(double)a2;
- (void)fireWithInterval:(double)a0;

@end
