@interface PPNamedEntityRecordLoadingDelegate : PPRecordLoadingDelegate

@property (copy, nonatomic) id /* block */ namedEntityRecordsSetup;
@property (copy, nonatomic) id /* block */ namedEntityRecordsHandler;
@property (copy, nonatomic) id /* block */ namedEntityRecordsCompletion;
@property (copy, nonatomic) id /* block */ recentNamedEntityRecordsSetup;
@property (copy, nonatomic) id /* block */ recentNamedEntityRecordsHandler;
@property (copy, nonatomic) id /* block */ recentNamedEntityRecordsCompletion;
@property (copy, nonatomic) id /* block */ resetNamedEntityRecordData;

- (unsigned char)recentRecordLoadingHandler:(id)a0;
- (id)description;
- (unsigned char)recordLoadingHandler:(id)a0;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)recentRecordLoadingCompletion;
- (void)recordLoadingCompletion;
- (unsigned char)recordLoadingSetup;
- (unsigned char)recentRecordLoadingSetup;
- (void)resetRecordData;

@end
