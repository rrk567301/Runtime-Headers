@class MPServerObjectDatabaseImportResult;

@interface MPCModelStorePlaybackItemsRequestAccumulatorImportResponse : NSObject

@property (readonly, copy, nonatomic) MPServerObjectDatabaseImportResult *serverObjectDatabaseImportResult;
@property (readonly, nonatomic) struct MPCModelStorePlaybackItemsRequestAccumulatorResult { char didFinishEntireRequest; char didFinishPrioritizedBatch; char hasPrioritizedItemsToLoad; } accumulatorImportResult;

- (void).cxx_destruct;
- (id)initWitDatabaseImportResult:(id)a0 accumulatorImportResult:(struct MPCModelStorePlaybackItemsRequestAccumulatorResult { char x0; char x1; char x2; })a1;

@end
