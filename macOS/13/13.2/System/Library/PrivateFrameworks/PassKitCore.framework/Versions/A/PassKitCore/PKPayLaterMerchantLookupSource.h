@class NSString, PKPayLaterFinancingPlan;

@interface PKPayLaterMerchantLookupSource : NSObject <PKMerchantLookupRequestSource> {
    PKPayLaterFinancingPlan *_financingPlan;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)type;
- (id)identifier;
- (id)mapsURL;
- (BOOL)isSettlement;
- (BOOL)isRefund;
- (id)mapsMerchantLookupRequest;
- (id)initWithFinancingPlan:(id)a0;

@end
