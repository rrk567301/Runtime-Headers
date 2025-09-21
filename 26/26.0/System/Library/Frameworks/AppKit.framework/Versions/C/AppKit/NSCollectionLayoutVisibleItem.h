@class NSCollectionLayoutItem, NSString, NSCollectionViewLayoutAttributes, NSIndexPath;

@interface NSCollectionLayoutVisibleItem : NSObject <_NSCollectionLayoutVisibleItem>

@property (retain, nonatomic) NSCollectionViewLayoutAttributes *layoutAttributes;
@property (retain, nonatomic) NSCollectionLayoutItem *layoutItem;
@property (nonatomic, getter=isDirty) BOOL dirty;
@property double alpha;
@property long long zIndex;
@property (getter=isHidden) BOOL hidden;
@property struct CGPoint { double x0; double x1; } center;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } transform3D;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) long long representedElementCategory;
@property (readonly, nonatomic) NSString *representedElementKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLayoutAttributes:(id)a0 layoutItem:(id)a1;
- (void).cxx_destruct;

@end
