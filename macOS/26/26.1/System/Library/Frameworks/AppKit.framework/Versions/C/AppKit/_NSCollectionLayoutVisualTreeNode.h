@class NSArray;

@interface _NSCollectionLayoutVisualTreeNode : _NSCollectionLayoutVisualFormatItem

@property (retain, nonatomic) NSArray *children;
@property (nonatomic) int axis;

- (BOOL)isHorizontalGroup;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isVerticalGroup;
- (id)initWithParent:(id)a0 children:(id)a1 axis:(int)a2;

@end
