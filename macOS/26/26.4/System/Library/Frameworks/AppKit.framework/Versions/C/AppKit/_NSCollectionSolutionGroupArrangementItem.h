@class NSCollectionLayoutItem, _NSCollectionLayoutItemSolver;

@interface _NSCollectionSolutionGroupArrangementItem : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutFrame;
@property (readonly, nonatomic) _NSCollectionLayoutItemSolver *solution;
@property (readonly, nonatomic) NSCollectionLayoutItem *item;

- (id)initWithSolution:(id)a0;
- (void).cxx_destruct;

@end
