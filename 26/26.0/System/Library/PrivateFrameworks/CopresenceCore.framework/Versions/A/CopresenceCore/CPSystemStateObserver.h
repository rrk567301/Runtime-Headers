@interface CPSystemStateObserver : NSObject <TUConversationManagerDelegate, CPAudioPolicyStateObserver, CPSystemStateObserver> {
    void /* unknown type, empty encoding */ carplayObserver;
    void /* unknown type, empty encoding */ displayCloneStateObserver;
    void /* unknown type, empty encoding */ managedConfigObserver;
    void /* unknown type, empty encoding */ conversationManager;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ audioRoutePolicyManager;
    void /* unknown type, empty encoding */ carPlayConnected;
    void /* unknown type, empty encoding */ screeningConversationUUIDs;
    void /* unknown type, empty encoding */ isLockdownModeEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_screenTimeAllowed;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isDisplayCloned;
    void /* unknown type, empty encoding */ $__lazy_storage_$__allowSharePlay;
    void /* unknown type, empty encoding */ $__lazy_storage_$__allowScreenSharing;
    void /* unknown type, empty encoding */ $__lazy_storage_$__allowScreenSharingInitiation;
}

@property (nonatomic, readonly) BOOL allowSharePlay;
@property (nonatomic, readonly) BOOL allowScreenSharing;
@property (nonatomic, readonly) BOOL allowScreenSharingInitiation;

- (id)initWithQueue:(id)a0;
- (void)conversationManager:(id)a0 stateChangedForConversation:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)conversationManager:(id)a0 removedActiveConversation:(id)a1;
- (void)conversationManager:(id)a0 screeningChangedForConversation:(id)a1;
- (void)addObserver:(id)a0 withQueue:(id)a1;
- (void)audioPolicyManager:(id)a0 sharePlayAllowedStateChanged:(BOOL)a1;

@end
