@class NSString;

@interface APPIEventSender : NSObject <APPolicyInstrumenting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_recordMetric:(long long)a0 adIdentifier:(id)a1 contextIdentifier:(id)a2 withProperties:(id)a3;
- (BOOL)adFiltered:(id)a0 policyIdentifier:(long long)a1 policyReason:(long long)a2 secondaryReason:(id)a3;
- (BOOL)adImpressed:(id)a0 impressionType:(long long)a1;
- (BOOL)adPlaced:(id)a0;
- (BOOL)adReceived:(id)a0 contextId:(id)a1 storefront:(id)a2 adUnitId:(id)a3 rank:(long long)a4 placement:(long long)a5 queryString:(id)a6;

@end
