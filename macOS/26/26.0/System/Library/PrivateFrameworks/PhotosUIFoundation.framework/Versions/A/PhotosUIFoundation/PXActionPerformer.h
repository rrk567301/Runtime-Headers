@class NSUndoManager, NSString, NSViewController;
@protocol PXActionPerformerDelegate, PXPresentationEnvironment;

@interface PXActionPerformer : NSObject {
    id /* block */ _completionHandler;
}

@property (class, readonly, nonatomic) BOOL isActionDestructive;
@property (class, readonly, nonatomic) BOOL destructiveActionsEnabled;

@property (readonly, nonatomic) NSViewController *hostViewController;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly) BOOL prefersAssetInclusionAfterRemoval;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) long long menuActionState;
@property (readonly, nonatomic) NSString *menuActionImageName;
@property (readonly, nonatomic) BOOL success;
@property (weak, nonatomic) id sender;
@property (readonly, nonatomic, getter=isCancellable) BOOL cancellable;
@property (readonly, nonatomic) unsigned long long state;
@property (weak, nonatomic) id<PXActionPerformerDelegate> delegate;
@property (readonly, nonatomic) NSViewController *presentedViewController;
@property (retain, nonatomic) id<PXPresentationEnvironment> presentationEnvironment;
@property (readonly, nonatomic) BOOL presentsMenu;
@property (readonly, nonatomic) BOOL shouldPreventTargetedDismissalAnimation;
@property (readonly, nonatomic) BOOL canPresentAlertInBackgroudState;

- (BOOL)presentViewController:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)menuItem;
- (BOOL)dismissAlert:(id)a0;
- (void)performActionWithCompletionHandler:(id /* block */)a0;
- (id)initWithActionType:(id)a0;
- (BOOL)presentMenu:(id)a0;
- (void)completeBackgroundTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (id)presentAlertWithConfigurationHandler:(id /* block */)a0;
- (void)cancelActionWithCompletionHandler:(id /* block */)a0;
- (BOOL)dismissAlertWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)dismissViewController:(id)a0 completionHandler:(id /* block */)a1;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (long long)menuItemState;
- (BOOL)performerResetsAfterCompletion;
- (BOOL)presentAlert:(id)a0 withCompletion:(id /* block */)a1;
- (void)_completeStateWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_completeUnlockTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_handleStepFinished:(unsigned long long)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)_performUnlockIfNeeded;
- (void)_transitionToState:(unsigned long long)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (id)localizedSubtitleForUseCase:(unsigned long long)a0;
- (void)performActionFromMenuItem;
- (BOOL)presentAlertWithTitle:(id)a0 message:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)presentViewController:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)pushViewController:(id)a0;
- (BOOL)requiresUnlockedDevice;

@end
