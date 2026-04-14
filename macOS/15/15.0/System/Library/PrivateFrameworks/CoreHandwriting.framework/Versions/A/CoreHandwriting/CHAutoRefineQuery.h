@class CHAutoRefineQueryItem;

@interface CHAutoRefineQuery : CHQuery

@property (copy, nonatomic) CHAutoRefineQueryItem *autoRefinedItem;

- (void).cxx_destruct;
- (id)debugName;
- (id)initWithRecognitionSession:(id)a0;
- (void)q_updateQueryResult;
- (BOOL)wantsAutoRefineUpdates;

@end
