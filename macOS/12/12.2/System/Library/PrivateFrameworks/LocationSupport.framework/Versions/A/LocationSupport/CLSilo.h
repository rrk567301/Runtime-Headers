@class NSString, NSMutableSet;

@interface CLSilo : NSObject <NSCopying> {
    BOOL _isIdle;
    double _lastIdleCheck;
    NSMutableSet *_idleHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _idleHandlersLock;
    double _currentLatchedAbsoluteTimestamp;
}

@property (readonly, nonatomic) NSString *identifier;

+ (id)main;
+ (void)setGlobalConfiguration:(id)a0;
+ (id)globalConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithIdentifier:(id)a0;
- (void)suspend;
- (BOOL)isSuspended;
- (id)newTimer;
- (void)heartBeat:(id)a0;
- (void)assertInside;
- (void)async:(id /* block */)a0;
- (void)sync:(id /* block */)a0;
- (void)runResumeHandlers;
- (double)currentLatchedAbsoluteTimestamp;
- (void)assertOutside;
- (void)prepareAndRunBlock:(id /* block */)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (BOOL)shouldBeIdled;
- (id)registerForIdleNotifications:(id /* block */)a0 onResume:(id /* block */)a1;
- (void)unregisterForIdleNotifications:(id)a0;
- (void)runIdleHandlers;

@end
