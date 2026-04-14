@protocol ABFaceTimeCommunicationsBridgeDelegate, CNCancelable;

@interface ABFaceTimeCommunicationsBridge : NSObject

@property (retain, nonatomic) id<CNCancelable> messagingAvailabilityChangedToken;
@property (retain, nonatomic) id<CNCancelable> faceTimeAvailabilityChangedToken;
@property (retain, nonatomic) id<CNCancelable> telephonyAvailaibilityChangedToken;
@property (readonly, nonatomic, getter=isTelephonySupported) BOOL telephonySupported;
@property (weak, nonatomic) id<ABFaceTimeCommunicationsBridgeDelegate> delegate;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)supplementalDialTelephonyCallString;
- (void)telophonySupportChanged:(id)a0;
- (void)startFaceTimeAvailabilityLookupForIdentifier:(id)a0 endpoints:(id)a1;
- (void)startMessagingAvailabilityLookupForEndpoint:(id)a0;
- (void)startAvailabilityCheckForContactIdentifier:(id)a0 service:(id)a1 endpoints:(id)a2;
- (id)searchAvailabilityCacheForEndpoints:(id)a0 service:(id)a1;
- (id)loggingNameForService:(id)a0;
- (id)validEndpointFromResults:(id)a0 forService:(id)a1;
- (void)startTelephonySupportLookup;
- (void)notifyClientOfResult:(id)a0 fromEndpoints:(id)a1 service:(id)a2 forIdentifier:(id)a3;
- (void)faceTimeAvailabilityChanged:(BOOL)a0 forContactIdentifier:(id)a1;
- (void)messagingAvailabilityChanged:(BOOL)a0 forEndpoint:(id)a1;
- (void)telephonyAvailaibilityChanged:(BOOL)a0;
- (void)makeFaceTimeCallWithContactIdentifier:(id)a0 endpoint:(id)a1 isAudio:(BOOL)a2;
- (void)makeFaceTimeCallWithEndpoint:(id)a0 isAudio:(BOOL)a1;

@end
