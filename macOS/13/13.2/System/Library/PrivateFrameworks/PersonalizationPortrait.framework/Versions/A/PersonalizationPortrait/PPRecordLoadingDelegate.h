@class NSString, NSDate;

@interface PPRecordLoadingDelegate : NSObject

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *loadRecordsDetectedSince;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (unsigned char)recordLoadingSetup;
- (unsigned char)recordLoadingHandler:(id)a0;
- (void)recordLoadingCompletion;
- (unsigned char)recentRecordLoadingSetup;
- (unsigned char)recentRecordLoadingHandler:(id)a0;
- (void)recentRecordLoadingCompletion;
- (void)resetRecordData;

@end
