@interface PPContactNameRecordLoadingDelegate : PPRecordLoadingDelegate

@property (copy, nonatomic) id /* block */ contactNameRecordsSetup;
@property (copy, nonatomic) id /* block */ contactNameRecordsHandler;
@property (copy, nonatomic) id /* block */ contactNameRecordsCompletion;
@property (copy, nonatomic) id /* block */ recentContactNameRecordsSetup;
@property (copy, nonatomic) id /* block */ recentContactNameRecordsHandler;
@property (copy, nonatomic) id /* block */ recentContactNameRecordsCompletion;
@property (copy, nonatomic) id /* block */ resetContactNameRecordData;

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
