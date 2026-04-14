@interface ADJourneyMetricsHelperInternal : NSObject <SearchAds.ADJourneyMetricsHelping> {
    void /* unknown type, empty encoding */ appStoreSource;
}

- (id)init;
- (void).cxx_destruct;
- (void)completed;
- (void)delivered;
- (void)offScreen;
- (void)placed;
- (void)discarded;
- (void)onScreen;
- (void)adMarkerInteracted;
- (void)interacted;
- (id)initWithPromotedContentIdentifier:(id)a0;
- (void)receivedWithAdamId:(id)a0 impressionId:(id)a1 adMetadata:(id)a2;
- (void)visibleWithStarting:(id)a0 duration:(double)a1;

@end
