@class PXSharedLibraryAssistantParticipantViewModel, NSString, NSArray, NSView, PXSharedLibraryAssistantViewModel, NSProgress, PXAssistantTemplateView, PXSharedLibraryParticipantTableViewController;

@interface PXSharedLibraryAssistantReviewParticipantsViewController : PXAssistantTemplateViewController <PXChangeObserver> {
    PXSharedLibraryAssistantParticipantViewModel *_participantViewModel;
    PXSharedLibraryParticipantTableViewController *_tableViewController;
    NSArray *_variableLayoutConstraints;
    NSView *_contentView;
    PXAssistantTemplateView *_templateView;
    NSProgress *_activityProgress;
}

@property (readonly, nonatomic) BOOL hasParticipants;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)viewWillAppear;
- (void)_updateImage;
- (void)_updateContent;
- (void)_updateProgress;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)firstButtonAction:(id)a0;
- (void)thirdButtonAction:(id)a0;
- (void)_updateButtonItems;
- (void)_setIsProcessing:(BOOL)a0;
- (void)_updateSubtitleText;
- (id)initWithViewModel:(id)a0 participantViewModel:(id)a1;
- (void)_finishReviewStepWithInvitationTransport:(long long)a0;
- (void)_updateTableViewInteractability;

@end
