@class NSArray;
@protocol CHTextInputQueryTargetDataSource;

@interface CHTextInputQuery : CHQuery

@property (copy, nonatomic, setter=_setAvailableItems:) NSArray *availableItems;
@property (nonatomic) double totalDuration;
@property (weak) id<CHTextInputQueryTargetDataSource> textInputTargetsDataSource;

+ (id)queryItemStableIdentifierForStrokeGroup:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)debugName;
- (void)q_updateQueryResult;
- (id)initWithRecognitionSession:(id)a0;
- (id)q_textInputItemsFromSessionResult:(id)a0;

@end
