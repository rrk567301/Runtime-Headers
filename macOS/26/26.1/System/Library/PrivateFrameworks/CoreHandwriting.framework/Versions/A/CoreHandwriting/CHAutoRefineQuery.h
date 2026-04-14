@class CHAutoRefineQueryItem, NSMutableArray;

@interface CHAutoRefineQuery : CHQuery

@property (readonly, copy, nonatomic) CHAutoRefineQueryItem *autoRefinedItem;
@property (readonly, copy, nonatomic) NSMutableArray *autoRefinedItems;

- (id)debugName;
- (void).cxx_destruct;
- (id)initWithRecognitionSession:(id)a0;
- (void)q_updateQueryResult;
- (BOOL)wantsAutoRefineUpdates;

@end
