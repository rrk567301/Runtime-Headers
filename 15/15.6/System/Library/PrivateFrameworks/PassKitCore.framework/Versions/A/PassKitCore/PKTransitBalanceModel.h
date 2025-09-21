@class PKPaymentPass, NSString, NSArray, NSDictionary, PKTransitPassProperties, NSMutableArray, NSMutableDictionary;

@interface PKTransitBalanceModel : NSObject {
    NSDictionary *_balancesByID;
    PKTransitPassProperties *_transitProperties;
    NSArray *_dynamicPlans;
    NSMutableDictionary *_dynamicPlansByUniqueId;
}

@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) NSString *primaryDisplayableBalance;
@property (readonly, nonatomic) NSString *displayableListOfBalances;
@property (readonly, nonatomic) NSArray *displayableBalances;
@property (readonly, nonatomic) NSArray *displayableCurrencyBalances;
@property (readonly, nonatomic) NSArray *displayablePointsBalances;
@property (readonly, nonatomic) NSArray *displayableCommutePlanBalances;
@property (readonly, nonatomic) NSString *displayableCommutePlanCount;
@property (readonly, nonatomic) NSArray *transitCommutePlans;
@property (readonly, nonatomic) NSArray *displayableCommutePlans;
@property (readonly, nonatomic) NSArray *displayableCommutePlanActions;
@property (readonly, nonatomic) NSMutableArray *balanceFields;
@property (readonly, nonatomic) NSDictionary *balancesAndCountPlansByID;
@property (readonly, nonatomic) char hasBalanceContent;
@property (readonly, nonatomic) char hasCurrencyBalance;
@property (readonly, nonatomic) char hasPointsBalance;
@property (readonly, nonatomic) char hasPositiveBalance;
@property (readonly, nonatomic) char hasCommutePlanContent;
@property (readonly, nonatomic) char hasDeviceBoundCommutePlans;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_updateBalancesAndPlans;
- (void)applyStoredValueBalancesFromProperties:(id)a0;
- (id)balanceForIdentifiers:(id)a0;
- (id)filteredActionsForDisplayableEntities;
- (void)getDisplayableCommutePlanDetailsForTitle:(id *)a0 value:(id *)a1 subtitle:(id *)a2 isExpired:(char *)a3;
- (id)initWithPass:(id)a0;
- (void)setDynamicBalances:(id)a0;
- (void)setDynamicBalancesByID:(id)a0;
- (void)setTransitProperties:(id)a0;
- (void)setTransitProperties:(id)a0 andApplyStoredValueBalances:(char)a1;
- (void)updateWithDynamicBalances:(id)a0;
- (void)updateWithDynamicCommutePlans:(id)a0;

@end
