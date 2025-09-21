@class NSString, NSIndexPath;

@interface UXCollectionViewLayoutAttributes : NSObject <NSCopying> {
    unsigned long long _hash;
    NSString *_elementKind;
    NSString *_reuseIdentifier;
    NSString *_isCloneString;
    struct { unsigned char isCellKind : 1; unsigned char isDecorationView : 1; unsigned char isHidden : 1; unsigned char isClone : 1; } _layoutFlags;
}

@property (nonatomic) char isPushing;
@property (nonatomic) double verticalOffsetFromFloatingPosition;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) double alpha;
@property (nonatomic) long long zIndex;
@property (nonatomic) char isFloating;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } floatingFrame;
@property (nonatomic, getter=isHidden) char hidden;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) unsigned long long representedElementCategory;
@property (readonly, nonatomic) NSString *representedElementKind;

+ (id)layoutAttributesForDecorationViewOfKind:(id)a0 withIndexPath:(id)a1;
+ (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 withIndexPath:(id)a1;
+ (id)layoutAttributesForCellWithIndexPath:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (char)_isCell;
- (id)_elementKind;
- (char)_isClone;
- (char)_isDecorationView;
- (char)_isEquivalentTo:(id)a0;
- (char)_isSupplementaryView;
- (char)_isTransitionVisibleTo:(id)a0;
- (id)_reuseIdentifier;
- (void)_setElementKind:(id)a0;
- (void)_setIsClone:(char)a0;
- (void)_setReuseIdentifier:(id)a0;
- (void)_setIndexPath:(id)a0;

@end
