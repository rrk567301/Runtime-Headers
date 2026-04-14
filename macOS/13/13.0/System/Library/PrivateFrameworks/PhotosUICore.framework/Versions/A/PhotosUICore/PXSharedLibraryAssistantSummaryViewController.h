@class NSProgress, PXSharedLibraryAssistantViewModel, NSString;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryAssistantSummaryViewController : PXAssistantTemplateViewController <PXAssistantViewController>

@property (retain, nonatomic) NSProgress *previewProgress;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)updateProgress;
- (id)initWithViewModel:(id)a0;
- (void)firstButtonAction:(id)a0;
- (void)thirdButtonAction:(id)a0;
- (void)prepareUIForProcessing:(BOOL)a0;
- (void)_setIsProcessing:(BOOL)a0;
- (id)_presentationEnvironment;
- (void)createPreviewAndCompleteAssistant;
- (void)skipAndContinue;
- (void)cancelShareIfInProgress;
- (void)_createPreviewAndCompleteAssistant;
- (void)_previewInvitationAndCompleteAssistant;

@end
