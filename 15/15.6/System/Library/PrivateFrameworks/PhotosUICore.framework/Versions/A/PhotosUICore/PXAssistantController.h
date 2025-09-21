@class NSString, PXAssistantNavigationController;
@protocol PXAssistantContext, PXAssistantControllerDelegate;

@interface PXAssistantController : NSViewController <PXAssistantViewControllerDelegate, PXAssistantNavigationControllerDelegate, NSWindowDelegate> {
    PXAssistantNavigationController *_navigationController;
}

@property (readonly, nonatomic) id<PXAssistantContext> context;
@property (weak, nonatomic) id<PXAssistantControllerDelegate> delegate;
@property (nonatomic) char completed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithContext:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (char)windowShouldClose:(id)a0;
- (void)cancelAssistantWithDestruction:(char)a0;
- (void)assistantViewController:(id)a0 presentAlertWithConfiguration:(id)a1 animated:(char)a2;
- (void)_completeAssistantWithError:(id)a0;
- (void)_confirmCancellationOfAssistantWithDestruction;
- (void)_presentInitialViewControllers;
- (void)_stepBackwardInAssistantAnimated:(char)a0;
- (void)_stepForwardInAssistantAnimated:(char)a0;
- (void)assistantForAssistantViewController:(id)a0 failedWithError:(id)a1;
- (void)assistantViewController:(id)a0 dismissViewControllerAnimated:(char)a1;
- (void)assistantViewController:(id)a0 presentViewController:(id)a1 animated:(char)a2;
- (void)assistantViewController:(id)a0 presentViewControllerAsSheet:(id)a1 animated:(char)a2;
- (void)assistantViewController:(id)a0 pushViewController:(id)a1 animated:(char)a2;
- (void)cancelAssistantForAssistantViewController:(id)a0;
- (void)cancelAssistantWithDestructionForAssistantViewController:(id)a0;
- (void)completeAssistantForAssistantViewController:(id)a0;
- (void)completeAssistantWithError:(id)a0;
- (id)initialStepContexts;
- (id)nextStepContextForStepContextIdentifier:(id)a0;
- (char)shouldConfirmCancellationOfAssistantForStepContextWithIdentifier:(id)a0;
- (void)stepBackwardInAssistantForAssistantViewController:(id)a0;
- (void)stepContextWithIdentifier:(id)a0 confirmCancellationWithAlertProperties:(id /* block */)a1;
- (void)stepForwardInAssistantForAssistantViewController:(id)a0;
- (void)stepForwardInAssistantForAssistantViewControllerAsCurrentViewController:(id)a0;

@end
