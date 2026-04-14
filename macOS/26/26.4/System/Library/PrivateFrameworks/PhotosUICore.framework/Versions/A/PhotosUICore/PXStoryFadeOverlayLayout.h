@class NSString, PXStoryModel;

@interface PXStoryFadeOverlayLayout : PXGLayout <PXChangeObserver, PXGSolidColorSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _fadeSpriteIndex;
}

@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)update;
- (id)initWithModel:(id)a0;
- (void)didUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)_updateContent;
- (void)_invalidateContent;
- (void)alphaDidChange;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)referenceSizeDidChange;
- (void)willUpdate;

@end
