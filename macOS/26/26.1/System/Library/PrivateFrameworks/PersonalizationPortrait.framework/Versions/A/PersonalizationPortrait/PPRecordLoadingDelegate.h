@class NSString;

@interface PPRecordLoadingDelegate : NSObject

@property (readonly, nonatomic) NSString *name;

- (void)recentRecordLoadingCompletion;
- (unsigned char)recentRecordLoadingSetup;
- (unsigned char)recordLoadingHandler:(id)a0;
- (void)resetRecordData;
- (id)description;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)recordLoadingCompletion;
- (unsigned char)recentRecordLoadingHandler:(id)a0;
- (unsigned char)recordLoadingSetup;

@end
