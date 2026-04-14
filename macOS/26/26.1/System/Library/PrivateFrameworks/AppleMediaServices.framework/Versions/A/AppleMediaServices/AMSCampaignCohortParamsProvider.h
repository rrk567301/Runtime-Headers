@interface AMSCampaignCohortParamsProvider : NSObject {
    void /* unknown type, empty encoding */ kParamsKey;
    void /* unknown type, empty encoding */ kLastUpdatedKey;
    void /* unknown type, empty encoding */ defaults;
}

+ (id)provider;

- (void).cxx_destruct;
- (id)init;
- (id)retrieveMetricsParamsStringPromiseWithBag:(id)a0 currentMetricsString:(id)a1;

@end
