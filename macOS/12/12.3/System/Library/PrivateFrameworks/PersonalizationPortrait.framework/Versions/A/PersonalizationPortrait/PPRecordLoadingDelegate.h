@class NSString, NSDate;

@interface PPRecordLoadingDelegate : NSObject

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *loadRecordsDetectedSince;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (unsigned char)recordLoadingSetup;
- (void)recordLoadingCompletion;
- (unsigned char)recordLoadingHandler:(id)a0;
- (void)recentRecordLoadingCompletion;
- (void)resetRecordData;
- (unsigned char)recentRecordLoadingSetup;
- (unsigned char)recentRecordLoadingHandler:(id)a0;

@end
