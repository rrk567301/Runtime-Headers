@class PKFlight, NSArray, PKPassBalanceModel, PKPassRelevancyModel, PKPassLiveRender;

@interface PKPassDynamicState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPassLiveRender *liveRender;
@property (retain, nonatomic) PKPassBalanceModel *balanceModel;
@property (retain, nonatomic) PKPassRelevancyModel *relevancyModel;
@property (retain, nonatomic) NSArray *agreements;
@property (retain, nonatomic) PKFlight *flight;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
