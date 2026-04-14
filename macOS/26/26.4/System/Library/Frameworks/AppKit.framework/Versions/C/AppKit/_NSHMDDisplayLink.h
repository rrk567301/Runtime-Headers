@class NSObject;
@protocol OS_dispatch_source;

@interface _NSHMDDisplayLink : NSHMDDisplayLink {
    id /* block */ _displayTimingBlock;
    NSObject<OS_dispatch_source> *_timer;
    _Atomic unsigned long long _suspensions;
}

- (void)resume;
- (BOOL)isValid;
- (void)suspend;
- (void)invalidate;
- (id)init;
- (void)dealloc;
- (id)initWithDisplayTiming:(id /* block */)a0 handler:(id /* block */)a1;

@end
