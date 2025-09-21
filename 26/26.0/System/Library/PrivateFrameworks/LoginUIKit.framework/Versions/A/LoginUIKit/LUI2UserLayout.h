@class NSMutableDictionary;

@interface LUI2UserLayout : NSCollectionViewLayout <LUI2UserLayoutProtocol>

@property (getter=_contentSize, setter=_setContentSize:) struct CGSize { double width; double height; } _contentSize;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } layoutBounds;
@property (readonly) struct { struct CGPoint { double x; double y; } userPictureCenter; double userPictureRadius; struct CGSize { double width; double height; } userViewSize; } userViewDimensions;
@property (retain) NSMutableDictionary *cachedItemFrames;
@property (readonly) BOOL appearsAsButtonToAccessibility;

+ (Class)layoutAttributesClass;
+ (unsigned long long)maxUsersForPeekABoo;

- (long long)scrollDirection;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)prepareLayout;
- (id)init;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)_prepareLayout;
- (void).cxx_destruct;
- (id)_itemFrameForIndexPath:(id)a0;
- (id)itemFrameForItemIndex:(unsigned long long)a0;
- (BOOL)shouldAnimateToLayout:(id)a0;

@end
