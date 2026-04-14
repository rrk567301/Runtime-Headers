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

- (void)heartBeat:(id)a0;
- (void)prepareAndRunBlock:(id /* block */)a0;
- (BOOL)isSuspended;
- (void)resume;
- (void)suspend;
- (void)unregisterForIdleNotifications:(id)a0;
- (void)runResumeHandlers;
- (void)sync:(id /* block */)a0;
- (void)intendToSync;
- (void)async:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)shouldBeIdled;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)newTimer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (double)currentLatchedAbsoluteTimestamp;
- (id)registerForIdleNotifications:(id /* block */)a0 onResume:(id /* block */)a1;
- (void)assertInside;
- (void)runIdleHandlers;
- (void)assertOutside;

@end
