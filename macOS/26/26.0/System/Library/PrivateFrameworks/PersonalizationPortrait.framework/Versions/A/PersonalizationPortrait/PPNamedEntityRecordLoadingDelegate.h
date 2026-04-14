@interface PPNamedEntityRecordLoadingDelegate : PPRecordLoadingDelegate

@property (copy, nonatomic) id /* block */ namedEntityRecordsSetup;
@property (copy, nonatomic) id /* block */ namedEntityRecordsHandler;
@property (copy, nonatomic) id /* block */ namedEntityRecordsCompletion;
@property (copy, nonatomic) id /* block */ recentNamedEntityRecordsSetup;
@property (copy, nonatomic) id /* block */ recentNamedEntityRecordsHandler;
@property (copy, nonatomic) id /* block */ recentNamedEntityRecordsCompletion;
@property (copy, nonatomic) id /* block */ resetNamedEntityRecordData;

- (unsigned char)recordLoadingHandler:(id)a0;
- (unsigned char)recordLoadingSetup;
- (unsigned char)recentRecordLoadingHandler:(id)a0;
- (void)recentRecordLoadingCompletion;
- (unsigned char)recentRecordLoadingSetup;
- (void)resetRecordData;
- (id)description;
- (void)recordLoadingCompletion;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
