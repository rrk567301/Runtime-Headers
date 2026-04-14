@class NSArray;
@protocol CHTextInputQueryTargetDataSource;

@interface CHTextInputQuery : CHQuery {
    NSArray *_availableItems;
    double _totalDuration;
}

@property (weak) id<CHTextInputQueryTargetDataSource> textInputTargetsDataSource;
@property (readonly, copy, nonatomic) NSArray *availableItems;
@property (readonly, nonatomic) double totalDuration;

+ (id)queryItemStableIdentifierForStrokeGroup:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debugName;
- (id)initWithRecognitionSession:(id)a0;
- (void)q_updateQueryResult;

@end
