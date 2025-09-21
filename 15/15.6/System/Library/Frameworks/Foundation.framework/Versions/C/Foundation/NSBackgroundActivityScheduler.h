@class NSString, NSObject;
@protocol OS_xpc_object;

@interface NSBackgroundActivityScheduler : NSObject {
    NSString *_identifier;
    double _interval;
    double _tolerance;
    double _delay;
    id /* block */ _activity;
    NSObject<OS_xpc_object> *_additionalProperties;
    long long _qualityOfService;
    NSObject<OS_xpc_object> *_currentActivity;
    long long _flags;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _invalidateLock;
    char _repeats;
    char _preregistered;
    char _appRefresh;
}

@property (getter=isPreregistered) char preregistered;
@property double delay;
@property (copy) id /* block */ checkInHandler;
@property (getter=_isAppRefresh) char _appRefresh;
@property (readonly, copy) NSString *identifier;
@property long long qualityOfService;
@property char repeats;
@property double interval;
@property double tolerance;
@property (readonly) char shouldDefer;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)initWithIdentifier:(id)a0;
- (id)currentActivity;
- (void)_setAdditionalXPCActivityProperties:(id)a0;
- (void)_updateCriteria:(id)a0;
- (void)_updateCriteriaForCompletedActivity:(id)a0;
- (void)scheduleWithBlock:(id /* block */)a0;
- (void)setCurrentActivity:(id)a0;

@end
