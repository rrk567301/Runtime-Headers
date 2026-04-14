@protocol _NSDiffableDataSourceState;

@interface _NSDiffableDataSourceDiffer : NSObject <_NSDiffableDataSourceDiffer>

@property (retain, nonatomic) id<_NSDiffableDataSourceState> beforeDataSourceState;
@property (retain, nonatomic) id<_NSDiffableDataSourceState> afterDataSourceState;

+ (id)differWithBeforeDataSourceState:(id)a0 afterDataSourceState:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)computeUpdates;
- (id)initWithBeforeDataSource:(id)a0 afterDataSource:(id)a1;
- (id)_computeUpdatesForIdentifierBasedDiff;
- (id)_computeSectionBoundaryMovesForItemDiffer:(id)a0;
- (id)_sectionUpdatesForDiffResults:(id)a0 deletedSections:(id)a1 insertedSections:(id)a2;
- (id)_itemUpdatesForDiffResults:(id)a0 sectionBoundaryMoves:(id)a1 deletedSections:(id)a2 insertedSections:(id)a3;
- (BOOL)_verifyForUpdates:(id)a0;

@end
