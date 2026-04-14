@class NSString;
@protocol PXSharedLibrary;

@interface PXExitSharedLibraryActionPerformer : PXActionPerformer <PXAssistantControllerDelegate>

@property (retain, nonatomic) id<PXSharedLibrary> sharedLibraryOrPreview;
@property BOOL shouldConfirmExit;
@property long long exitRetentionPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (void)assistantController:(id)a0 completedWithError:(id)a1;
- (void)performActionWithSharedLibraryOrPreview:(id)a0 shouldConfirmExit:(BOOL)a1 exitRetentionPolicy:(long long)a2 presentationEnvironment:(id)a3 completionHandler:(id /* block */)a4;
- (void)_handlePresentationErrorWithDismissalHandler:(id /* block */)a0;
- (void)_handleUserCancellationWithDismissalHandler:(id /* block */)a0;
- (void)_presentFailureAlertForSharedLibraryOrPreview:(id)a0 error:(id)a1 dismissalHandler:(id /* block */)a2;
- (void)_beginExitWithContext:(id)a0 dismissalHandler:(id /* block */)a1;
- (void)_performExitWithContext:(id)a0 dismissalHandler:(id /* block */)a1;

@end
