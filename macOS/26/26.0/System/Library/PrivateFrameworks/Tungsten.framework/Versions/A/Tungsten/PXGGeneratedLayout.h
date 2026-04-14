@class PXLayoutGenerator, NSString, PXGLayoutGuide;
@protocol PXGGeneratedLayoutDelegate;

@interface PXGGeneratedLayout : PXGItemsLayout <PXGDiagnosticsProvider> {
    PXLayoutGenerator *_generator;
    struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *_generatorItemsGeometryBuffer;
    long long _generatorItemsGeometryBufferCapacity;
    long long _generatorItemsGeometryBufferCount;
    struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *_generatorAccessoriesGeometryBuffer;
    long long _generatorAccessoriesGeometryBufferCapacity;
    long long _generatorAccessoriesGeometryBufferCount;
    BOOL _isUpdatingSprites;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _generatorUpdateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
}

@property (readonly, nonatomic) PXLayoutGenerator *generator;
@property (nonatomic) long long keyItemIndex;
@property (nonatomic) unsigned char presentationType;
@property (nonatomic) unsigned char mediaKind;
@property (nonatomic) unsigned char accessoryPresentationType;
@property (nonatomic) unsigned char accessoryMediaKind;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) BOOL useSaliency;
@property (nonatomic) BOOL enableEffects;
@property (nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } itemCornerRadius;
@property (nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } edgeCornerRadius;
@property (nonatomic) long long defaultSpriteTag;
@property (nonatomic) long long keyItemSpriteTag;
@property (nonatomic) double lazyLoadingOutset;
@property (weak, nonatomic) id<PXGGeneratedLayoutDelegate> delegate;
@property (readonly, nonatomic) PXGLayoutGuide *headerLayoutGuide;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)didUpdate;
- (id)init;
- (void)update;
- (void).cxx_destruct;
- (void)contentSizeDidChange;
- (void)_updateContentSize;
- (void)userInterfaceDirectionDidChange;
- (void)_invalidateSprites;
- (void)_updateSprites;
- (void)displayScaleDidChange;
- (void)getSpriteZPosition:(out float *)a0 clippingRect:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forSpriteKind:(long long)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })itemsToLoad;
- (void)loadedItemsDidChange;
- (void)metricsDidChange;
- (id)newGenerator;
- (id)objectReferenceForSpriteIndex:(unsigned int)a0;
- (void)referenceSizeDidChange;
- (void)setNumberOfItems:(long long)a0 withChangeDetails:(id)a1 changeMediaVersionHandler:(id /* block */)a2;
- (void)spritesDidUpdate;
- (void)visibleRectDidChange;
- (void)willUpdate;
- (void)enumerateItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_adjustItemsToLoadForAnchors:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 loadRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_invalidateGenerator;
- (void)_updateAccessoriesGeometryBufferForSpriteCount:(long long)a0;
- (void)_updateGenerator;
- (void)_updateGeometries;
- (void)_updateItemsGeometryBufferForSpriteCount:(long long)a0;
- (void)_updateSpritesPostUpdate;
- (void)didApplySpriteChangeDetails:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })itemsToLoadInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)paddingDidChange;
- (long long)reasonableItemCountForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForItem:(long long)a0;

@end
