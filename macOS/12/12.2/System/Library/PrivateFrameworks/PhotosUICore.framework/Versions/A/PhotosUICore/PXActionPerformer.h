@class NSString, NSObject;
@protocol PXAnonymousViewController, PXActionPerformerDelegate;

@interface PXActionPerformer : NSObject {
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) NSObject<PXAnonymousViewController> *hostViewController;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) BOOL success;
@property (weak, nonatomic) id sender;
@property (readonly, nonatomic, getter=isCancellable) BOOL cancellable;
@property (readonly, nonatomic) unsigned long long state;
@property (weak, nonatomic) id<PXActionPerformerDelegate> delegate;
@property (readonly, nonatomic) NSObject<PXAnonymousViewController> *presentedViewController;
@property (copy, nonatomic) id /* block */ viewControllerPresenter;
@property (copy, nonatomic) id /* block */ viewControllerDismisser;
@property (readonly, nonatomic) BOOL presentsMenu;
@property (readonly, nonatomic) BOOL shouldPreventTargetedDismissalAnimation;
@property (copy, nonatomic) id /* block */ alertPresenter;
@property (copy, nonatomic) id /* block */ alertDismisser;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)menuItem;
- (BOOL)dismissAlert:(id)a0;
- (void)performActionWithCompletionHandler:(id /* block */)a0;
- (id)initWithActionType:(id)a0;
- (BOOL)presentMenu:(id)a0;
- (BOOL)presentViewController:(id)a0;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)performUserInteractionTask;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (BOOL)presentAlert:(id)a0 withCompletion:(id /* block */)a1;
- (void)performBackgroundTask;
- (id)disambiguationMenuForUseCase:(unsigned long long)a0 withMenuActionHandler:(id /* block */)a1;
- (void)cancelActionWithCompletionHandler:(id /* block */)a0;
- (BOOL)performerResetsAfterCompletion;
- (BOOL)requiresUnlockedDevice;
- (void)_performUnlockIfNeeded;
- (void)_completeUnlockTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)pushViewController:(id)a0;
- (BOOL)dismissViewController:(id)a0 completionHandler:(id /* block */)a1;
- (void)completeBackgroundTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_handleStepFinished:(unsigned long long)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)_transitionToState:(unsigned long long)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)_completeStateWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)presentAlertWithTitle:(id)a0 message:(id)a1 completionHandler:(id /* block */)a2;
- (void)performActionFromMenuItem;

@end
