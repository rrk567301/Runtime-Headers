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

- (void)sync:(id /* block */)a0;
- (BOOL)isSuspended;
- (void)prepareAndRunBlock:(id /* block */)a0;
- (void)suspend;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)shouldBeIdled;
- (void)runResumeHandlers;
- (void)resume;
- (id)newTimer;
- (id)initWithIdentifier:(id)a0;
- (void)assertOutside;
- (void).cxx_destruct;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (void)unregisterForIdleNotifications:(id)a0;
- (void)heartBeat:(id)a0;
- (void)async:(id /* block */)a0;
- (void)assertInside;
- (void)runIdleHandlers;
- (void)intendToSync;
- (id)registerForIdleNotifications:(id /* block */)a0 onResume:(id /* block */)a1;
- (double)currentLatchedAbsoluteTimestamp;

@end
