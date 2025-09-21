@class PXImageLayerModulator, NSString;

@interface PXLivePhotoViewModulator : NSObject <PXMutableLivePhotoViewModulator> {
    char _isPerformingChanges;
    char _isPerformingUpdates;
    struct { char input; char gainMapImage; } _needsUpdateFlags;
}

@property (nonatomic) char animateGainMapAppearance;
@property (nonatomic) char displayingVideoComplement;
@property (readonly, nonatomic) PXImageLayerModulator *imageModulator;
@property (readonly, nonatomic) PXImageLayerModulator *videoModulator;
@property (readonly, nonatomic) struct CGImage { } *gainMapImage;
@property (readonly, nonatomic) float gainMapValue;
@property (readonly, nonatomic) char revealsGainMapImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (char)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_invalidateGainMapImage;
- (void)_invalidateInput;
- (void)_updateGainMapImage;
- (void)_updateInput;
- (id)initWithImageModulator:(id)a0 videoModulator:(id)a1;
- (void)performChanges_Private:(id /* block */)a0;
- (void)setGainMapImage:(struct CGImage { } *)a0;
- (void)setGainMapImage:(struct CGImage { } *)a0 animated:(char)a1;
- (void)setGainMapValue:(float)a0;
- (void)setRevealsGainMapImage:(char)a0;

@end
