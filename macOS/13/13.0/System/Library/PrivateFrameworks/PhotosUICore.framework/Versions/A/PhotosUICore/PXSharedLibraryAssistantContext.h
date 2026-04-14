@class PXSharedLibraryAssistantViewModel, NSMutableDictionary, NSString, PXSharedLibraryFaceTileImageProvider, PXSharedLibraryLegacyDevicesMonitor;
@protocol PXSharedLibrary;

@interface PXSharedLibraryAssistantContext : NSObject <PXChangeObserver, PXAssistantContext> {
    PXSharedLibraryFaceTileImageProvider *_faceTileImageProvider;
}

@property (readonly, nonatomic) NSMutableDictionary *stepContextIdentifiersToContexts;
@property (readonly, nonatomic) PXSharedLibraryLegacyDevicesMonitor *legacyDevicesMonitor;
@property (readonly, nonatomic) id<PXSharedLibrary> sharedLibrary;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setupAssistantContextWithSharedLibrary:(id)a0 sourceLibraryInfo:(id)a1 legacyDevicesMonitor:(id)a2;
+ (id)replyAssistantContextWithSharedLibrary:(id)a0 legacyDevicesMonitor:(id)a1;
+ (id)_reviewContextIdentifierForMode:(long long)a0 hasPreview:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateCombinedImage;
- (id)sharedLibraryStepContextForStepContextIdentifier:(id)a0;
- (id)_setupIntroStepContextWithIdentifier:(id)a0;
- (id)_replyIntroStepContextWithIdentifier:(id)a0;
- (id)_participantsStepContextWithIdentifier:(id)a0;
- (id)_rulesStepContextWithIdentifier:(id)a0;
- (id)_dateSelectionStepContextWithIdentifier:(id)a0;
- (id)_peopleSelectionStepContextWithIdentifier:(id)a0;
- (id)_summaryStepContextWithIdentifier:(id)a0;
- (id)_reviewReplyStepContextWithIdentifier:(id)a0;
- (id)_reviewReplyDirectStepContextWithIdentifier:(id)a0;
- (id)_reviewReplyPreviewStepContextWithIdentifier:(id)a0;
- (id)_cameraStepContextWithIdentifier:(id)a0;
- (id)_howToStepContextWithIdentifier:(id)a0;
- (id)_legacyDevicesFallbackStepContextWithIdentifier:(id)a0;
- (id)_reviewParticipantsSetupStepContextWithIdentifier:(id)a0;
- (id)_reviewParticipantsSetupDirectStepContextWithIdentifier:(id)a0;
- (id)_reviewParticipantsSetupPreviewStepContextWithIdentifier:(id)a0;
- (void)willCancelAssistant;
- (BOOL)shouldConfirmCancellationOfAssistantForStepContextWithIdentifier:(id)a0;
- (void)stepContextWithIdentifier:(id)a0 confirmCancellationWithAlertProperties:(id /* block */)a1;
- (id)nextStepContextIdentifierFromStepContextIdentifier:(id)a0;
- (id)initialStepContextIdentifiers;
- (id)stepContextForStepContextIdentifier:(id)a0;
- (void)setAssistantTraitCollection:(id)a0;
- (id)_initWithSharedLibrary:(id)a0 sourceLibraryInfo:(id)a1 legacyDevicesMonitor:(id)a2 mode:(long long)a3;
- (void)configureParticipantListForStepContext:(id)a0 isReviewStep:(BOOL)a1;
- (id)_firstVisibleStepContextIdentifierIgnoringPreview:(BOOL)a0;
- (id)_nextStepContextIdentifierFromStepContextIdentifier:(id)a0;
- (id)_nextContextIdentifierForSelectedPolicy:(long long)a0;
- (id)_legacyDeviceStepContextIdentifierOrNextContextIdentifier:(id)a0;
- (void)_updateParticipantsInFaceTile;

@end
