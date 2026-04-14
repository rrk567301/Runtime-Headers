@class NSString, NSDictionary, NSUUID;

@interface HMDHomePodSetupLatencyLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (nonatomic) long long sessionSetupOpenMS_HH1;
@property (nonatomic) long long controllerKeyExchangeMS_HH1;
@property (nonatomic) long long newAccessoryTransferMS_HH1;
@property (nonatomic) long long sessionSetupCloseMS_HH1;
@property (nonatomic) long long sentinelZoneFetchMS_HH1;
@property (nonatomic) long long totalDurationMS_HH1;
@property (nonatomic) long long accountSettleWaitMS_HH2;
@property (nonatomic) long long currentDeviceIDSWaitMS_HH2;
@property (nonatomic) long long homeManagerReadyMS_HH2;
@property (nonatomic) long long firstCoreDataImportMS_HH2;
@property (nonatomic) long long accessoryAddMS_HH2;
@property (nonatomic) long long settingsCreationMS_HH2;
@property (nonatomic) long long pairingIdentityCreationMS_HH2;
@property (nonatomic) long long siriReadyMS_HH2;
@property (nonatomic) long long eventRouterServerConnectionMS_HH2;
@property (nonatomic) long long primaryResidentElectionMS_HH2;
@property (nonatomic) long long eventRouterFirstEventPushMS_HH2;
@property (nonatomic) long long totalDurationMS_HH2;
@property (nonatomic) BOOL iCloudAvailable_INT;
@property (nonatomic) BOOL IDSAvailable_INT;
@property (nonatomic) BOOL manateeAvailable_INT;
@property (nonatomic) BOOL networkAvailable_INT;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) long long underlyingErrorCode;
@property (retain, nonatomic) NSString *underlyingErrorDomain;
@property (retain, nonatomic) NSString *errorStage_String;
@property (nonatomic) unsigned long long savedEventState;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initSavedLogEventState:(unsigned long long)a0;
- (id)initWithSessionSetupOpenMS_HH1:(long long)a0 controllerKeyExchangeMS_HH1:(long long)a1 newAccessoryTransferMS_HH1:(long long)a2 sessionSetupCloseMS_HH1:(long long)a3 sentinelZoneFetchMS_HH1:(long long)a4 totalDurationMS_HH1:(long long)a5 accountSettleWaitMS_HH2:(long long)a6 currentDeviceIDSWaitMS_HH2:(long long)a7 homeManagerReadyMS_HH2:(long long)a8 firstCoreDataImportMS_HH2:(long long)a9 accessoryAddMS_HH2:(long long)a10 settingsCreationMS_HH2:(long long)a11 pairingIdentityCreationMS_HH2:(long long)a12 siriReadyMS_HH2:(long long)a13 eventRouterServerConnectionMS_HH2:(long long)a14 primaryResidentElectionMS_HH2:(long long)a15 eventRouterFirstEventPushMS_HH2:(long long)a16 totalDurationMS_HH2:(long long)a17 iCloudAvailable_INT:(BOOL)a18 IDSAvailable_INT:(BOOL)a19 manateeAvailable_INT:(BOOL)a20 networkAvailable_INT:(BOOL)a21 errorCode:(long long)a22 errorDomain:(id)a23 underlyingErrorCode:(long long)a24 underlyingErrorDomain:(id)a25 errorStage_String:(id)a26 savedEventState:(unsigned long long)a27;

@end
