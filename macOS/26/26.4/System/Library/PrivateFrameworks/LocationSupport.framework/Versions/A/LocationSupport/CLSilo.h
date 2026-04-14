@class NSString, NSMutableSet;

@interface CLSilo : NSObject <NSCopying> {
    BOOL _isIdle;
    double _lastIdleCheck;
    NSMutableSet *_idleHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _idleHandlersLock;
    double _currentLatchedAbsoluteTimestamp;
}

@property (readonly, nonatomic) NSString *identifier;

+ (void)setGlobalConfiguration:(id)a0;
+ (id)main;
+ (id)globalConfiguration;

- (void)async:(id /* block */)a0;
- (void)resume;
- (id)newTimer;
- (id)debugDescription;
- (id)registerForIdleNotifications:(id /* block */)a0 onResume:(id /* block */)a1;
- (void)runResumeHandlers;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)assertInside;
- (void)unregisterForIdleNotifications:(id)a0;
- (void)assertOutside;
- (void)suspend;
- (void)heartBeat:(id)a0;
- (BOOL)isSuspended;
- (double)currentLatchedAbsoluteTimestamp;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)runIdleHandlers;
- (void)intendToSync;
- (void)sync:(id /* block */)a0;
- (BOOL)shouldBeIdled;
- (void)prepareAndRunBlock:(id /* block */)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;

@end
