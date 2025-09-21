@class NSString, LSSEventQueue, LSSXPCClient, NSMutableSet;

@interface LSSSubscriber : NSObject <LSSXPCClientDelegate> {
    LSSEventQueue *_events;
    NSMutableSet *_subscriptions;
    BOOL _idling;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) LSSXPCClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)unsubscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_changeActivityLevel:(unsigned char)a0;
- (void)client:(id)a0 recievedUpdate:(struct { double x0; double x1; struct { } x2; BOOL x3; })a1;
- (void)clientInvalidated:(id)a0;
- (id)lightSourceForTime:(double)a0;
- (id)subscribeOnQueue:(id)a0 activityLevelChangeHandler:(id /* block */)a1;
- (id)subscribeOnQueue:(id)a0 options:(unsigned int)a1 activityLevelChangeHandler:(id /* block */)a2;

@end
