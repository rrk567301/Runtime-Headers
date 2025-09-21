@class NSURL, STManagementState, DMFWebsitePolicyMonitor, STAskForTimeResource, DMFApplicationPolicyMonitor, NSString, NSSet, CNContactStore, STConversationContext, NSArray, CNContainer, DMFCategoryPolicyMonitor, STConversation;
@protocol STLockoutPolicyControllerDelegate;

@interface STLockoutPolicyController : NSObject {
    unsigned long long _reuseIdentifier;
    long long _style;
    unsigned long long _stateBeforePending;
    STManagementState *_managementState;
    STAskForTimeResource *_askForTimeResource;
    DMFCategoryPolicyMonitor *_categoryPolicyMonitor;
    DMFApplicationPolicyMonitor *_applicationPolicyMonitor;
    DMFWebsitePolicyMonitor *_websitePolicyMonitor;
    id<STLockoutPolicyControllerDelegate> _delegate;
}

@property (retain) STConversation *conversation;
@property (retain) STConversationContext *conversationContext;
@property (copy) NSArray *contactsHandles;
@property (readonly, copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSURL *websiteURL;
@property (readonly, copy) NSSet *blockedContactsHandles;
@property (readonly) CNContactStore *contactStore;
@property (readonly) CNContainer *iCloudContainer;
@property (readonly) char contactsEditable;
@property (readonly) unsigned long long state;
@property (readonly) char needsToSetRestrictionsPasscode;
@property (readonly) char shouldAllowOneMoreMinute;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)authenticateRestrictionsPasscode:(id)a0 completionHandler:(id /* block */)a1;
- (char)_actionIgnoreLimitForTodayWithCompletionHandler:(id /* block */)a0;
- (char)_actionOneMoreMinuteWithCompletionHandler:(id /* block */)a0;
- (char)_actionRemindMeInMinutesWithCompletionHandler:(id /* block */)a0;
- (char)_actionRemindMeInOneHourWithCompletionHandler:(id /* block */)a0;
- (void)_allowedByContactsHandleDidChange:(id)a0 conversationContext:(id)a1;
- (void)_allowedByScreenTimeDidChange:(char)a0 conversationContext:(id)a1;
- (void)_applicationCurrentlyLimitedDidChange:(char)a0 conversationContext:(id)a1;
- (void)_askForTimeResponseWithState:(long long)a0 respondingParent:(id)a1 amountGranted:(id)a2 error:(id)a3;
- (void)_authenticatedApproveForAdditionalTime:(double)a0 withCompletionHandler:(id /* block */)a1;
- (char)_changeInternalStateTo:(unsigned long long)a0;
- (void)_changePolicyToCurrent;
- (void)_changePolicyToCurrentWithBundleIdentifier:(id)a0;
- (void)_changePolicyToCurrentWithCategoryIdentifier:(id)a0;
- (void)_changePolicyToCurrentWithURL:(id)a0;
- (void)_changeStateToBeforePending;
- (void)_changeStateToInitial;
- (void)_handleChangeToPolicy:(long long)a0;
- (char)_isRestrictionsPasscodeSet;
- (id)_makeAskForTimeResource;
- (char)_requestAdditionalTime:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)_setupCategoryPolicyMonitorForIdentifier:(id)a0;
- (void)_setupWebsitePolicyMonitorForURL:(id)a0;
- (char)_shouldRequestMoreTime;
- (double)_timeIntervalToEndOfDay;
- (void)_updateAllowedByScreenTime:(char)a0 applicationCurrentlyLimited:(char)a1 allowedByContactsHandle:(id)a2;
- (char)handleAction:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithBundleIdentifier:(id)a0 contactsHandles:(id)a1 delegate:(id)a2;
- (id)initWithBundleIdentifier:(id)a0 conversationContext:(id)a1 contactStore:(id)a2 delegate:(id)a3;
- (id)initWithBundleIdentifier:(id)a0 delegate:(id)a1;
- (id)initWithCategoryIdentifier:(id)a0 delegate:(id)a1;
- (id)initWithWebsiteURL:(id)a0 delegate:(id)a1;

@end
