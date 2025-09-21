@class _NSCollectionPreferredSizes;
@protocol _NSCollectionLayoutSectionSolver;

@interface _NSCollectionCompositionalSolverPreferredSizesRebaseInfo : NSObject

@property (readonly, nonatomic) id<_NSCollectionLayoutSectionSolver> solution;
@property (readonly, nonatomic) _NSCollectionPreferredSizes *preferredSizes;

- (id)initWithSolution:(id)a0 preferredSizes:(id)a1;
- (void).cxx_destruct;

@end
