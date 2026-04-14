@class PXSharedLibraryAssistantViewModel, PXSharedLibraryLegacyDevicesMonitor, NSString;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryReplyAssistantViewController : PXAssistantTemplateViewController <PXChangeObserver, PXAssistantViewController>

@property (nonatomic) BOOL wantsToStepForward;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly, nonatomic) PXSharedLibraryLegacyDevicesMonitor *legacyDevicesMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)declineInvitation;
- (BOOL)_canStepForward;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)firstButtonAction:(id)a0;
- (void)secondButtonAction:(id)a0;
- (void)_updateButtonItems;
- (id)initWithViewModel:(id)a0 legacyDevicesMonitor:(id)a1;
- (void)_setIsWaitingToStepForward:(BOOL)a0;
- (void)_stepForward;
- (void)acceptAndContinue;
- (void)legacyDevicesMonitorChangedState;

@end
