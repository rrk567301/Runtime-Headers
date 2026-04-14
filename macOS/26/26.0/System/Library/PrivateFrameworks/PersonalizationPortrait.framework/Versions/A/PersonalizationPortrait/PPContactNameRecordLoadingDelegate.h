@interface PPContactNameRecordLoadingDelegate : PPRecordLoadingDelegate

@property (copy, nonatomic) id /* block */ contactNameRecordsSetup;
@property (copy, nonatomic) id /* block */ contactNameRecordsHandler;
@property (copy, nonatomic) id /* block */ contactNameRecordsCompletion;
@property (copy, nonatomic) id /* block */ recentContactNameRecordsSetup;
@property (copy, nonatomic) id /* block */ recentContactNameRecordsHandler;
@property (copy, nonatomic) id /* block */ recentContactNameRecordsCompletion;
@property (copy, nonatomic) id /* block */ resetContactNameRecordData;

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
