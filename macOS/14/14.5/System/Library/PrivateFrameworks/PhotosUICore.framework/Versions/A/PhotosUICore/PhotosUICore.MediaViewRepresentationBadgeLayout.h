@class NSIndexSet;

@interface PhotosUICore.MediaViewRepresentationBadgeLayout : PXGLayout <PXGViewSource> {
    void /* unknown type, empty encoding */ contentRect;
    void /* unknown type, empty encoding */ badgeInfo;
    void /* unknown type, empty encoding */ badgeMediaVersion;
    void /* unknown type, empty encoding */ updater;
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)referenceSizeDidChange;
- (void)updateSprites;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;

@end
