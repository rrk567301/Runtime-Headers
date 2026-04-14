@class NSString, NSIndexPath;

@interface NSCollectionViewLayoutAttributes : NSObject <NSCopying> {
    NSString *_elementKind;
    NSString *_reuseIdentifier;
    struct CGPoint { double x; double y; } _center;
    struct CGSize { double width; double height; } _size;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } _transform;
    NSIndexPath *_indexPath;
    NSString *_isCloneString;
    struct { unsigned char isCellKind : 1; unsigned char isDecorationView : 1; unsigned char isHidden : 1; unsigned char isClone : 1; unsigned char isInterItemGap : 1; unsigned char isInterSectionGap : 1; unsigned char isHorizontalGap : 1; } _layoutFlags;
}

@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property struct CGSize { double x0; double x1; } size;
@property double alpha;
@property long long zIndex;
@property (getter=isHidden) BOOL hidden;
@property (retain) NSIndexPath *indexPath;
@property (readonly) long long representedElementCategory;
@property (readonly) NSString *representedElementKind;

+ (id)layoutAttributesForInterItemGapBeforeIndexPath:(id)a0;
+ (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 withIndexPath:(id)a1;
+ (id)layoutAttributesForDecorationViewOfKind:(id)a0 withIndexPath:(id)a1;
+ (id)layoutAttributesForItemWithIndexPath:(id)a0;
+ (id)layoutAttributesForInterSectionGapBeforeIndexPath:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)_elementKind;
- (struct CGPoint { double x0; double x1; })center;
- (double)fractionIntoEndZone;
- (void)setFractionIntoEndZone:(double)a0;
- (double)distanceIntoEndZone;
- (void)setDistanceIntoEndZone:(double)a0;
- (BOOL)isFloating;
- (void)setFloating:(BOOL)a0;
- (id)__elementKind;
- (id)__indexPath;
- (BOOL)_isHorizontalGap;
- (void)_setIsHorizontalGap:(BOOL)a0;
- (void)_setIsClone:(BOOL)a0;
- (BOOL)_isClone;
- (void)_setElementKind:(id)a0;
- (void)_setReuseIdentifier:(id)a0;
- (id)_reuseIdentifier;
- (id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transform3D;
- (void)setTransform3D:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (BOOL)_isEquivalentTo:(id)a0;
- (BOOL)_isTransitionVisibleTo:(id)a0;
- (BOOL)_isCell;
- (BOOL)_isDecorationView;
- (BOOL)_isSupplementaryView;

@end
