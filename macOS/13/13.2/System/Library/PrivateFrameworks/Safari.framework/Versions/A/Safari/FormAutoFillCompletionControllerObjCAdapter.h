@class NSData, NSString, NSHashTable, AutoFillAuthorizationController, LAContext, AutoFillLocalAuthenticationOperation, AutoFillLocalAuthenticationManager, NSMutableSet, SFAppAutoFillOneTimeCodeProvider;

@interface FormAutoFillCompletionControllerObjCAdapter : NSObject <AutoFillLocalAuthenticationOperationDelegate, SFAppAutoFillOneTimeCodeProviderObserver, NSTableViewDataSource, NSTableViewDelegate, CompletionUIPresentationControllerDelegate> {
    void *_completionController;
    NSMutableSet *_completionAbortingNotificationNames;
    NSHashTable *_observers;
    SFAppAutoFillOneTimeCodeProvider *_cachedOneTimeCodeProvider;
    AutoFillAuthorizationController *_autoFillAuthorizationController;
    BOOL _hasUserInteractedWithTouchID;
    AutoFillLocalAuthenticationOperation *_currentLocalAuthenticationOperation;
    AutoFillLocalAuthenticationManager *_autoFillLocalAuthenticationManager;
}

@property (nonatomic) BOOL _biometricAuthenticationStillInUse;
@property (readonly, nonatomic) LAContext *_currentOperationLAContext;
@property (readonly, nonatomic) BOOL isAskingForBiometricAuthentication;
@property (readonly, nonatomic) NSData *currentExternalizedContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (id)_tableView;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)tableViewSelectionIsChanging:(id)a0;
- (void *)completionController;
- (void)oneTimeCodeProviderReceivedCode:(id)a0;
- (void)consumeOneTimeCode:(id)a0;
- (id)_oneTimeCodeProvider;
- (void)_updateTouchIDAvailabilityIfNecessary:(id)a0;
- (void *)_formCompletionController;
- (void)menuTableView:(id)a0 mouseUpInRow:(long long)a1;
- (id)initWithCompletionController:(void *)a0;
- (void)completionWindowDidShow;
- (double)widthOfCellForItem:(void *)a0;
- (void)_didToggleTouchIDToAutoFill:(id)a0;
- (void)_abortCompletionFromNotification:(id)a0;
- (void)operation:(id)a0 attemptedAuthenticationWithResult:(long long)a1;
- (void)completionUIPresentationControllerWillStartPresentationAnimation:(id)a0;
- (void)completionUIPresentationControllerDidFinishPresentationAnimation:(id)a0;
- (void)completionWindowWillShow;
- (void)completionWindowDidHide;
- (BOOL)shouldAbortCompletionFromNotification:(id)a0;
- (void)_registerForCompletionAbortingNotifications;
- (void)_unregisterForCompletionAbortingNotifications;
- (void)_registerForCompletionAbortingNotificationNamed:(id)a0 object:(id)a1;
- (void)didRefreshCompletionListItems:(const void *)a0;
- (BOOL)performActionForListItem:(const void *)a0 result:(BOOL *)a1 shouldAbortCompletion:(BOOL *)a2;
- (void)registerAutoFillControllerObserver:(id)a0;
- (void)removeAutoFillControllerObserver:(id)a0;
- (void)_updateBiometricPromptForTableViewIfNecessary:(id)a0;
- (id)_autoFillCaptionTableCellViewNibName;
- (id)_completionListTableView;
- (void)_registerTableViewCellClasses;
- (double)widthOfAutoFillCaptionWithString:(id)a0;
- (BOOL)shouldShowAuthenticationSheetForCompletionListItem:(const void *)a0;
- (void)_requestBiometricAuthenticationIfNecessary;
- (void)_cancelBiometricAuthenticationIfPossible;
- (void)_cancelBiometricAuthentication;
- (void)_cancelCurrentLAOperation;
- (id)_itemNameForAutoFillAuthorizationSheetWithItem:(const void *)a0;
- (void)_presentAuthenticationSheetWithCompletionListItem:(const void *)a0;
- (void)_showBiometricMatchFailureFeedback;
- (void)updateBiometricAvailabilityInCompletionList:(BOOL)a0;
- (void)_selectFirstCompletionItem;
- (void)_updateCellAtIndex:(long long)a0 inTableView:(id)a1 withBlock:(id /* block */)a2;
- (void)_startHideMyEmailRecordUpdate;
- (void)provisionHideMyEmailRecord;

@end
