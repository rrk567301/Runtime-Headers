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

- (void)sync:(id /* block */)a0;
- (void)async:(id /* block */)a0;
- (void)assertOutside;
- (id)debugDescription;
- (id)initWithIdentifier:(id)a0;
- (id)newTimer;
- (void)suspend;
- (BOOL)isSuspended;
- (void)heartBeat:(id)a0;
- (void)unregisterForIdleNotifications:(id)a0;
- (void)resume;
- (BOOL)shouldBeIdled;
- (void).cxx_destruct;
- (void)intendToSync;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)prepareAndRunBlock:(id /* block */)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)registerForIdleNotifications:(id /* block */)a0 onResume:(id /* block */)a1;
- (void)runIdleHandlers;
- (void)runResumeHandlers;
- (double)currentLatchedAbsoluteTimestamp;
- (void)assertInside;

@end
