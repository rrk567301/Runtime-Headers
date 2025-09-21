@class NSString;

@interface PXPublishMomentShareBudgetOverridePromptConfiguration : NSObject

@property (nonatomic) char useWLAN;
@property (nonatomic) unsigned long long networkType;
@property (nonatomic) unsigned long long assetCount;
@property (copy, nonatomic) NSString *deviceModel;

- (void).cxx_destruct;
- (id)initWithUseWLAN:(char)a0 networkType:(unsigned long long)a1 assetCount:(unsigned long long)a2 deviceModel:(id)a3;

@end
