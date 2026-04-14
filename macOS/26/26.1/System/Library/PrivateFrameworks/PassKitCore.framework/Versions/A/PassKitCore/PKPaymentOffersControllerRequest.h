@class NSString, PKPaymentOfferRewardsRedemptionIntent, NSSet, PKSelectedPaymentOfferPaymentPassDetails, NSMutableOrderedSet;

@interface PKPaymentOffersControllerRequest : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long catalogUpdateReason;
@property (readonly, nonatomic) PKSelectedPaymentOfferPaymentPassDetails *selectedPassDetails;
@property (readonly, copy, nonatomic) NSString *criteriaIdentifier;
@property (readonly, nonatomic) PKPaymentOfferRewardsRedemptionIntent *rewardsRedemptionIntent;
@property (readonly, nonatomic) unsigned long long updateReason;
@property (readonly, copy, nonatomic) NSSet *dynamicPageTypes;
@property (readonly, nonatomic) NSMutableOrderedSet *completions;

- (id)description;
- (void).cxx_destruct;
- (void)addCompletions:(id)a0;
- (BOOL)coalesceWithRequest:(id)a0;
- (id)initCancelRequestWithCriteriaIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initConfirmRequestWithCriteriaIdentifier:(id)a0 rewardsRedemptionIntent:(id)a1 completion:(id /* block */)a2;
- (id)initDynamicContentRequestWithCriteriaIdentifier:(id)a0 pageTypes:(id)a1 completion:(id /* block */)a2;
- (id)initPaymentOfferCatalogRequestWithCatalogUpdateReason:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initPaymentOfferRequestWithCriteriaIdentifierIdentifier:(id)a0 selectedPassDetails:(id)a1 reason:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)initRewardsBalanceWithCriteriaIdentifier:(id)a0 selectedPassDetails:(id)a1 completion:(id /* block */)a2;
- (id)initSelectRequestWithCriteriaIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)requestRequiresMerchantDetails;

@end
