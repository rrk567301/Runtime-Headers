@class NSString, CDPDTTRController, NSNumber, AAFAnalyticsTransportInProcessRTC;

@interface CDPDAnalyticsTransport : NSObject <AAFAnalyticsTransport>

@property (copy, nonatomic) NSNumber *clientType;
@property (copy, nonatomic) NSString *clientBundleId;
@property (copy, nonatomic) NSString *clientName;
@property (retain, nonatomic) CDPDTTRController *ttrController;
@property (retain, nonatomic) AAFAnalyticsTransportInProcessRTC *transport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultTransport;
+ (void)flushCaches;
+ (id)approvedRecoveryContactEventsForADPAndDNU;
+ (void)flushTransportCache;
+ (id)getAllowedADPEvents;
+ (id)getAllowedAccountAccessEvents;
+ (id)getAllowedCfuType;
+ (id)getAllowedDNUEvents;
+ (id)getAllowedElementIdentifiers;
+ (id)getAllowedErrorDomain;
+ (id)getAllowedEscapeOffer;
+ (id)getAllowedHandlerKey;
+ (id)getAllowedHookName;
+ (id)getAllowedLocalSecretType;
+ (id)getAllowedSecurityEvents;
+ (id)getAllowedStringsForTelemetry;
+ (id)getApprovedEvents:(id)a0;
+ (id)getApprovedEventsForADPAndDNU;
+ (id)getApprovedEventsForAll;
+ (BOOL)isEventPrivacyApproved:(id)a0;
+ (id)transportForClientType:(id)a0 clientBundleId:(id)a1 clientName:(id)a2;
+ (id)transportForEvent:(id)a0;

- (oneway void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)_sendEvent:(id)a0;
- (void)_appendCountryFieldToEvent:(id)a0 withCurrentEstimates:(id)a1;
- (void)_enforceIdentifiableDataPrivacyComplianceOnEvent:(id)a0 manager:(id)a1;
- (BOOL)_isEventPrivacyApprovedIdentifiable:(id)a0;
- (void)_renewMissingDeviceSessionIDIfNeeded:(id)a0 manager:(id)a1 account:(id)a2;
- (void)_replaceClientNameWithEvent:(id)a0;
- (void)_updateEventWithDefaultMetadata:(id)a0;
- (void)configureSessionForEvent:(id)a0 sendEventBlock:(id /* block */)a1 telemetryQueue:(id)a2;
- (void)enforcePrivacyComplianceOnEvent:(id)a0 key:(id)a1 value:(id)a2;
- (id)initWithClientType:(id)a0 clientBundleId:(id)a1 clientName:(id)a2;
- (BOOL)shouldEnforcePrivacyComplianceForEvent:(id)a0;

@end
