@class PXSharedLibraryAssistantViewModel, PXSharedLibraryStatusProvider, NSString;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryReplyAssistantReviewViewController : PXAssistantTemplateViewController <PXChangeObserver, PXAssistantViewController>

@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)acceptInvitation;
- (void)_setIsProcessing:(BOOL)a0;
- (void)_updateButtonItems;
- (void)_updateTitleAndSubtitleText;
- (void)firstButtonAction:(id)a0;
- (id)initWithViewModel:(id)a0 sharedLibraryStatusProvider:(id)a1;

@end
