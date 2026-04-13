@class NSString, UXCollectionViewLayoutAttributes, UXCollectionView;

@interface UXCollectionReusableView : NSView {
    UXCollectionViewLayoutAttributes *_layoutAttributes;
    UXCollectionView *_collectionView;
    struct { unsigned char updateAnimationCount : 5; unsigned char wasDequeued : 1; } _reusableViewFlags;
}

@property (readonly, copy, nonatomic) NSString *reuseIdentifier;
@property (readonly, nonatomic) BOOL isFloatingPinned;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityParent;
- (id)accessibilityRole;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)_accessibilityIndexPath;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)willTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (void)didTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (id)_collectionView;
- (id)_layoutAttributes;
- (BOOL)accessibilityPerformScrollToVisible;
- (void)_setReuseIdentifier:(id)a0;
- (void)_setBaseLayoutAttributes:(id)a0;
- (void)_setLayoutAttributes:(id)a0;
- (BOOL)_isInUpdateAnimation;
- (void)_addUpdateAnimation;
- (void)_clearUpdateAnimation;
- (BOOL)_wasDequeued;
- (void)_markAsDequeued;
- (void)_setCollectionView:(id)a0;
- (struct CGImage { } *)_snapshot:(BOOL)a0;
- (id)_dynamicAccessibilityParent;
- (id)_layoutSectionAccessibility;
- (id)_accessibilityDefaultRole;
- (void)setIsFloatingPinned:(BOOL)a0;

@end
