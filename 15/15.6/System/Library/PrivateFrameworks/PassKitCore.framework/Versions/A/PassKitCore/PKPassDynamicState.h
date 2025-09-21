@class PKPassRelevancyModel, PKPassLiveRender, PKPassBalanceModel;

@interface PKPassDynamicState : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) PKPassLiveRender *liveRender;
@property (retain, nonatomic) PKPassBalanceModel *balanceModel;
@property (retain, nonatomic) PKPassRelevancyModel *relevancyModel;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;

@end
