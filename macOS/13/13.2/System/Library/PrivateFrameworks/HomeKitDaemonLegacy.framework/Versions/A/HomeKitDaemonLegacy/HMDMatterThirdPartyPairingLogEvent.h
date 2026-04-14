@class NSNumber, NSString, NSDictionary;

@interface HMDMatterThirdPartyPairingLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (retain, nonatomic) NSNumber *pairingDuration;
@property (retain, nonatomic) NSNumber *success;
@property (copy, nonatomic) NSString *errorDomain;
@property (retain, nonatomic) NSNumber *errorCode;
@property (retain, nonatomic) NSNumber *matterCategoryNumber;
@property (retain, nonatomic) NSNumber *matterProductNumber;
@property (retain, nonatomic) NSNumber *matterProductID;
@property (copy, nonatomic) NSString *client;
@property (retain, nonatomic) NSNumber *communicationProtocol;
@property (retain, nonatomic) NSNumber *requiresMatterCustomCommissioningFlow;
@property (retain, nonatomic) NSNumber *credentialsSentToClient;
@property (retain, nonatomic) NSNumber *providedWiFiScanResults;
@property (retain, nonatomic) NSNumber *providedThreadScanResults;
@property (nonatomic) BOOL cleanClose;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;

@end
