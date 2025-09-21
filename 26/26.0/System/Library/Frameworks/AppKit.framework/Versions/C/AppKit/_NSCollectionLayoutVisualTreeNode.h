@class NSArray;

@interface _NSCollectionLayoutVisualTreeNode : _NSCollectionLayoutVisualFormatItem

@property (retain, nonatomic) NSArray *children;
@property (nonatomic) int axis;

- (BOOL)isVerticalGroup;
- (id)description;
- (BOOL)isHorizontalGroup;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0 children:(id)a1 axis:(int)a2;

@end
