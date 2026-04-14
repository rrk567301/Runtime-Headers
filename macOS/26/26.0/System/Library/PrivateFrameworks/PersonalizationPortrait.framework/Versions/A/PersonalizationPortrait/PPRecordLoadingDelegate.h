@class NSString;

@interface PPRecordLoadingDelegate : NSObject

@property (readonly, nonatomic) NSString *name;

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
