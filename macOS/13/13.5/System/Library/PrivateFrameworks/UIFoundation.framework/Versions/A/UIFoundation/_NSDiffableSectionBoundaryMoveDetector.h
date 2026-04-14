@class NSSet;
@protocol _NSIdentifierDiffer, _NSDiffableDataSourceState;

@interface _NSDiffableSectionBoundaryMoveDetector : NSObject {
    id<_NSIdentifierDiffer> _differ;
    id<_NSDiffableDataSourceState> _beforeState;
    id<_NSDiffableDataSourceState> _afterState;
}

@property (readonly, nonatomic) NSSet *movePairs;
@property (readonly, nonatomic) BOOL didShortCircuit;

- (void).cxx_destruct;
- (id)_computeMovePairsFoundation;
- (id)_computeMovePairsSTL;
- (id)initWithItemDiffer:(id)a0 beforeDataSourceState:(id)a1 afterDataSourceState:(id)a2;

@end
