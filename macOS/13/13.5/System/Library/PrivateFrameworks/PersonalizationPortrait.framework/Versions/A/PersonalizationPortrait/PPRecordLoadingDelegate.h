@class NSString, NSDate;

@interface PPRecordLoadingDelegate : NSObject

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *loadRecordsDetectedSince;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)resetRecordData;
- (void)recentRecordLoadingCompletion;
- (unsigned char)recentRecordLoadingHandler:(id)a0;
- (unsigned char)recentRecordLoadingSetup;
- (void)recordLoadingCompletion;
- (unsigned char)recordLoadingHandler:(id)a0;
- (unsigned char)recordLoadingSetup;

@end
