@class NSObject;
@protocol OS_dispatch_queue, TUCallFilterControllerActions;

@interface TUCallFilterController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) id<TUCallFilterControllerActions> actionsDelegate;
@property (readonly, nonatomic) char silenceUnknownCallersEnabled;
@property (readonly, nonatomic) char silenceUnknownFaceTimeCallersEnabled;

- (void).cxx_destruct;
- (unsigned long long)callFilterStatusForDialRequest:(id)a0;
- (id)addressesToCheckForRestrictionsInConversation:(id)a0;
- (id)bundleIdentifierForCallProvider:(id)a0;
- (char)containsRestrictedHandle:(id)a0 forBundleIdentifier:(id)a1;
- (char)containsRestrictedHandle:(id)a0 forBundleIdentifier:(id)a1 performSynchronously:(char)a2;
- (id)initWithActionsDelegate:(id)a0 serialQueue:(id)a1;
- (char)isUnknownAddress:(id)a0 normalizedAddress:(id)a1 forBundleIdentifier:(id)a2;
- (char)isUnknownHandle:(id)a0;
- (id)policyForAddresses:(id)a0 forBundleIdentifier:(id)a1;
- (id)restrictedContacts:(id)a0 callProvider:(id)a1;
- (char)shouldRestrictAddresses:(id)a0 forBundleIdentifier:(id)a1;
- (char)shouldRestrictAddresses:(id)a0 forBundleIdentifier:(id)a1 performSynchronously:(char)a2;
- (char)shouldRestrictAddresses:(id)a0 performSynchronously:(char)a1;
- (char)shouldRestrictConversation:(id)a0 performSynchronously:(char)a1;
- (char)shouldRestrictDialRequest:(id)a0;
- (char)shouldRestrictDialRequest:(id)a0 performSynchronously:(char)a1;
- (char)shouldRestrictJoinConversationRequest:(id)a0 performSynchronously:(char)a1;
- (char)willRestrictAddresses:(id)a0 forBundleIdentifier:(id)a1;

@end
