@class MOPassthroughSubject, NSSet, NSXPCConnection, NSMutableDictionary, NSObject, NSString;

@interface MOSubscriptionCenter : NSObject <MOManagedSettingsSubscriberProxy>

@property (class, readonly, nonatomic) MOSubscriptionCenter *userCenter;

@property (readonly, copy, nonatomic) NSSet *effectiveInterestedGroups;
@property (readonly, nonatomic) NSObject *subscriptionLock;
@property (readonly, nonatomic) Class connectionClass;
@property (retain, nonatomic) NSXPCConnection *currentConnection;
@property (readonly, nonatomic) NSObject *connectionLock;
@property (readonly, nonatomic) MOPassthroughSubject *effectiveSubject;
@property (readonly, nonatomic) NSMutableDictionary *effectiveSubscriptions;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSubscription;
- (void)dealloc;
- (void).cxx_destruct;
- (void)effectiveSettingsChangedForGroups:(id)a0;
- (void)clearCurrentConnectionAndInvalidate:(BOOL)a0;
- (id)initWithConnectionClass:(Class)a0;
- (void)subscribeForEffectiveChanges:(id)a0 identifier:(id)a1;
- (void)unsubscribeFromEffectiveChanges:(id)a0;

@end
