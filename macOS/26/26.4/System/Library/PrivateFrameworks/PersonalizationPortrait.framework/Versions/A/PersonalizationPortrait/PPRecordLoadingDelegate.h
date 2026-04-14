@class NSString;

@interface PPRecordLoadingDelegate : NSObject

@property (readonly, nonatomic) NSString *name;

- (void)resetRecordData;
- (unsigned char)recordLoadingHandler:(id)a0;
- (void).cxx_destruct;
- (void)recordLoadingCompletion;
- (unsigned char)recentRecordLoadingHandler:(id)a0;
- (unsigned char)recordLoadingSetup;
- (id)initWithName:(id)a0;
- (id)description;
- (unsigned char)recentRecordLoadingSetup;
- (void)recentRecordLoadingCompletion;

@end
