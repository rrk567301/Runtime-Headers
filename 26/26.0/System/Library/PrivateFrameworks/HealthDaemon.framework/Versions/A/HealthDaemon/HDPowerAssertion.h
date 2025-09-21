@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface HDPowerAssertion : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    id /* block */ _timeoutHandler;
    _Atomic BOOL _invalidated;
}

@property (readonly) BOOL invalidated;
@property (readonly, copy) NSString *identifier;
@property (readonly) double timeout;

+ (id)powerAssertionWithIdentifier:(id)a0 timeout:(double)a1 timeoutHandler:(id /* block */)a2;

- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void).cxx_destruct;

@end
