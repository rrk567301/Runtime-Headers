@class PXCMMInvitationSpec, NSString, PXCMMFeedItemButtonViewConfiguration, PXCMMFeedActionPerformer, PXCMMInvitationViewModelManager, PXCMMInvitationViewModel;
@protocol PXCMMInvitation;

@interface PXCMMFeedItemLayout : PXGLayout <PXCMMFeedItemButtonViewDelegate, PXGDisplayAssetSource, PXGGradientSource, PXGStringSource, PXGSolidColorSource, PXChangeObserver> {
    PXCMMFeedActionPerformer *_actionPerformer;
    PXCMMInvitationSpec *_invitationSpec;
    unsigned int _backgroundSpriteIndex;
    unsigned int _shadowSpriteIndex;
    unsigned int _posterTitleSpriteIndex;
    unsigned int _gradientSpriteIndex;
    unsigned int _bulletSpriteIndex;
    unsigned int _titleSpriteIndex;
    unsigned int _subtitle1SpriteIndex;
    unsigned int _subtitle2SpriteIndex;
    unsigned int _buttonSpriteIndex;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned short _contentVersion;
    unsigned short _posterTitleSpriteVersion;
    PXCMMInvitationViewModelManager *_viewModelManager;
    PXCMMInvitationViewModel *_viewModel;
    PXCMMFeedItemButtonViewConfiguration *_buttonViewConfiguration;
}

@property (retain, nonatomic) id<PXCMMInvitation> invitation;
@property (readonly, nonatomic) unsigned int decorationOverlayAnchorSpriteIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)_updateContent;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)axSpriteIndexes;
- (id)_buttonViewConfiguration;
- (void)_invalidateContent;
- (void)_invalidateContentVersion;
- (void)_invalidatePosterTitleSpriteVersion;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)contextMenuForButtonView:(id)a0;
- (double)cornerRadiusForShadowSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)a0;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (void)displayScaleDidChange;
- (id)gradientForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)imageConfigurationAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)initWithActionPerformer:(id)a0 invitationSpec:(id)a1;
- (void)referenceSizeDidChange;
- (id)shadowForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)stringDrawingOptionsForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;

@end
