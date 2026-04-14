@class PXTitleSubtitleLabelSpec, PHFetchResult, NSString, PHPhotosHighlight, PXStoryExtendedTraitCollection;

@interface PXTripFeedItemLayout : PXGLayout <PXGDisplayAssetSource, PXGTitleSubtitleSource> {
    unsigned int _thumbnailSpriteIndex;
    unsigned int _shadowSpriteIndex;
    unsigned int _titleSubtitleSpriteIndex;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned short _contentVersion;
}

@property (readonly, nonatomic) PXTitleSubtitleLabelSpec *titleSubtitleSpec;
@property (nonatomic) BOOL isFavorite;
@property (readonly, nonatomic) PXStoryExtendedTraitCollection *extendedTraitCollection;
@property (retain, nonatomic) PHPhotosHighlight *tripHighlight;
@property (retain, nonatomic) PHFetchResult *keyAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)update;
- (void)_updateContent;
- (id)axSpriteIndexes;
- (id)_createTitleSubtitleSpec;
- (BOOL)_hasTripTitle;
- (void)_invalidateContent;
- (void)_invalidateContentVersion;
- (double)cornerRadiusForShadowSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)a0;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (void)displayScaleDidChange;
- (id)initWithExtendedTraitCollection:(id)a0 tripHighlight:(id)a1 keyAssets:(id)a2;
- (void)referenceSizeDidChange;
- (id)shadowForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)subtitleForSpriteAtIndex:(unsigned int)a0;
- (id)titleForSpriteAtIndex:(unsigned int)a0;
- (id)titleSubtitleSpecForSpriteAtIndex:(unsigned int)a0;

@end
