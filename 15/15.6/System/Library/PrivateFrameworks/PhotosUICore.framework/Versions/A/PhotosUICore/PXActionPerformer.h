@class NSUndoManager, NSString, NSObject;
@protocol PXAnonymousViewController, PXActionPerformerDelegate, PXPresentationEnvironment;

@interface PXActionPerformer : NSObject {
    id /* block */ _completionHandler;
}

@property (class, readonly, nonatomic) char isActionDestructive;

@property (readonly, nonatomic) NSObject<PXAnonymousViewController> *hostViewController;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly) char prefersAssetInclusionAfterRemoval;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) char success;
@property (weak, nonatomic) id sender;
@property (readonly, nonatomic, getter=isCancellable) char cancellable;
@property (readonly, nonatomic) unsigned long long state;
@property (weak, nonatomic) id<PXActionPerformerDelegate> delegate;
@property (readonly, nonatomic) NSObject<PXAnonymousViewController> *presentedViewController;
@property (retain, nonatomic) id<PXPresentationEnvironment> presentationEnvironment;
@property (readonly, nonatomic) char presentsMenu;
@property (readonly, nonatomic) char shouldPreventTargetedDismissalAnimation;
@property (readonly, nonatomic) char canPresentAlertInBackgroudState;

+ (id)createIndeterminateProgressToastForActionPerformer:(id)a0 title:(id)a1 description:(id)a2;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)menuItem;
- (char)dismissAlert:(id)a0;
- (void)performActionWithCompletionHandler:(id /* block */)a0;
- (id)initWithActionType:(id)a0;
- (char)presentMenu:(id)a0;
- (char)presentViewController:(id)a0;
- (void)completeUserInteractionTaskWithSuccess:(char)a0 error:(id)a1;
- (void)performUserInteractionTask;
- (void)_completeStateWithSuccess:(char)a0 error:(id)a1;
- (void)_completeUnlockTaskWithSuccess:(char)a0 error:(id)a1;
- (void)_handleStepFinished:(unsigned long long)a0 withSuccess:(char)a1 error:(id)a2;
- (void)_performUnlockIfNeeded;
- (void)_transitionToState:(unsigned long long)a0 withSuccess:(char)a1 error:(id)a2;
- (void)cancelActionWithCompletionHandler:(id /* block */)a0;
- (void)completeBackgroundTaskWithSuccess:(char)a0 error:(id)a1;
- (char)dismissAlertWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (char)dismissViewController:(id)a0 completionHandler:(id /* block */)a1;
- (id)localizedSubtitleForUseCase:(unsigned long long)a0;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (long long)menuItemState;
- (void)performActionFromMenuItem;
- (void)performBackgroundTask;
- (char)performerResetsAfterCompletion;
- (char)presentAlert:(id)a0 withCompletion:(id /* block */)a1;
- (id)presentAlertWithConfigurationHandler:(id /* block */)a0;
- (char)presentAlertWithTitle:(id)a0 message:(id)a1 completionHandler:(id /* block */)a2;
- (char)presentAlertWithTitle:(id)a0 message:(id)a1 radarConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (char)presentViewController:(id)a0 completionHandler:(id /* block */)a1;
- (char)pushViewController:(id)a0;
- (char)requiresUnlockedDevice;

@end
