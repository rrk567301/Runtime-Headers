@class NSString;

@interface PPRecordLoadingDelegate : NSObject

@property (readonly, nonatomic) NSString *name;

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
