@class IMCommLimitsPolicyCache, NSString, NSSet, TUCallProviderManager, STConversation, NSObject;
@protocol OS_dispatch_queue;

@interface IMDowntimeController : NSObject <TUCallProviderManagerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    char _needsNotificationsRegistering;
    STConversation *_stateLock_STConversation;
    NSSet *_stateLock_emergencyNumbersSet;
}

@property (class, readonly, nonatomic) char isContactLimitsFeatureEnabled;

@property (retain, nonatomic) TUCallProviderManager *callProviderManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *screenTimeDispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setupDispatchQueue;
@property (retain, nonatomic) IMCommLimitsPolicyCache *policyCache;
@property (nonatomic) char isRunningFromMacMessagesApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)fetchEmergencyNumbersSetWithProviderManager:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)providersChangedForProviderManager:(id)a0;
- (id)STConversation;
- (void)_addObserversToChat:(id)a0;
- (char)_allowedToShowConversationWithHandleIDs:(id)a0 sync:(char)a1 context:(id *)a2 participantIDsHash:(id)a3 trackingChat:(id)a4;
- (void)_doRegisterForScreenTimeNotifications;
- (void)_participantsForChatDidChange:(id)a0;
- (char)allowedToShowConversationForChat:(id)a0 sync:(char)a1;
- (char)allowedToShowConversationWithHandleIDs:(id)a0 sync:(char)a1 context:(id *)a2;
- (char)allowedToShowConversationWithHandleIDs:(id)a0 sync:(char)a1 context:(id *)a2 participantIDsHash:(id)a3;
- (id)conversationContextForChat:(id)a0;
- (id)emergencyNumbers;
- (void)getSTConversation:(id /* block */)a0;
- (void)initializeContext:(id)a0 participantIDsHash:(id)a1 trackingChat:(id)a2;
- (char)isDowntimeLimited;
- (char)isEmergencyHandle:(id)a0;
- (void)registerForScreenTimeNotifications;
- (void)setEmergencyNumbers:(id)a0;

@end
