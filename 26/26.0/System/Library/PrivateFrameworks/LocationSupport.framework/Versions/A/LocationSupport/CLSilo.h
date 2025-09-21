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
+ (id)globalConfiguration;
+ (void)setGlobalConfiguration:(id)a0;

- (id)newTimer;
- (void)async:(id /* block */)a0;
- (id)debugDescription;
- (BOOL)isSuspended;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)sync:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0;
- (id)registerForIdleNotifications:(id /* block */)a0 onResume:(id /* block */)a1;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (void)unregisterForIdleNotifications:(id)a0;
- (void)assertInside;
- (void)suspend;
- (void)resume;
- (void)runIdleHandlers;
- (void)intendToSync;
- (void)assertOutside;
- (void)prepareAndRunBlock:(id /* block */)a0;
- (void)runResumeHandlers;
- (void)heartBeat:(id)a0;
- (BOOL)shouldBeIdled;
- (double)currentLatchedAbsoluteTimestamp;
- (void).cxx_destruct;

@end
