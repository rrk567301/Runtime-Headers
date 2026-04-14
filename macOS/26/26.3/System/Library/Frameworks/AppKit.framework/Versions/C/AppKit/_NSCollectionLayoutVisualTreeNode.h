@class NSArray;

@interface _NSCollectionLayoutVisualTreeNode : _NSCollectionLayoutVisualFormatItem

@property (retain, nonatomic) NSArray *children;
@property (nonatomic) int axis;

- (id)description;
- (BOOL)isVerticalGroup;
- (void).cxx_destruct;
- (BOOL)isHorizontalGroup;
- (id)initWithParent:(id)a0 children:(id)a1 axis:(int)a2;

@end
