@class NSString, UXCollectionViewLayoutAttributes, UXCollectionView;

@interface UXCollectionReusableView : NSView {
    UXCollectionViewLayoutAttributes *_layoutAttributes;
    UXCollectionView *_collectionView;
    struct { unsigned char updateAnimationCount : 5; unsigned char wasDequeued : 1; } _reusableViewFlags;
}

@property (readonly, copy, nonatomic) NSString *reuseIdentifier;
@property (readonly, nonatomic) BOOL isFloatingPinned;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_setCollectionView:(id)a0;
- (id)_collectionView;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)accessibilityRole;
- (void)applyLayoutAttributes:(id)a0;
- (void)prepareForReuse;
- (void)_markAsDequeued;
- (id)accessibilityActionDescription:(id)a0;
- (id)_accessibilityIndexPath;
- (void)_addUpdateAnimation;
- (void)_clearUpdateAnimation;
- (BOOL)_isInUpdateAnimation;
- (id)_layoutAttributes;
- (void)_setBaseLayoutAttributes:(id)a0;
- (void)_setLayoutAttributes:(id)a0;
- (void)_setReuseIdentifier:(id)a0;
- (BOOL)_wasDequeued;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityParent;
- (void)accessibilityPerformAction:(id)a0;
- (BOOL)accessibilityPerformScrollToVisible;
- (void)didTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (BOOL)wantsUpdateLayer;
- (void)willTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (struct CGImage { } *)_snapshot:(BOOL)a0;
- (id)_accessibilityDefaultRole;
- (id)_dynamicAccessibilityParent;
- (id)_layoutSectionAccessibility;
- (void)setIsFloatingPinned:(BOOL)a0;

@end
