@class NSDecimalNumber, NSString, WADeviceAnalyticsFaultRecord;

@interface WADeviceAnalyticsLinkTestRecord : WADeviceAnalyticsDatedRecord

@property (nonatomic) BOOL badDNSServers;
@property (nonatomic) BOOL badGateway;
@property (nonatomic) BOOL dnsResultsValid;
@property (nonatomic) BOOL dnsSuccess;
@property (nonatomic) BOOL foundCriticalFailure;
@property (copy, nonatomic) NSDecimalNumber *gatewayMaxRTT;
@property (copy, nonatomic) NSDecimalNumber *gatewayMinRTT;
@property (copy, nonatomic) NSDecimalNumber *gatewayPacketLoss;
@property (nonatomic) BOOL gatewayResultsValid;
@property (copy, nonatomic) NSString *initiatingReason;
@property (nonatomic) BOOL isTriggeredByFault;
@property (copy, nonatomic) NSDecimalNumber *localDNSMaxRTT;
@property (copy, nonatomic) NSDecimalNumber *localDNSMinRTT;
@property (copy, nonatomic) NSDecimalNumber *localDNSPacketLoss;
@property (nonatomic) BOOL localResultsValid;
@property (copy, nonatomic) NSDecimalNumber *publicDNSMaxRTT;
@property (copy, nonatomic) NSDecimalNumber *publicDNSMinRTT;
@property (copy, nonatomic) NSDecimalNumber *publicDNSPacketLoss;
@property (nonatomic) BOOL publicResultsValid;
@property (nonatomic) BOOL seenSpecificAcFailure;
@property (nonatomic) BOOL siriTCPResultsValid;
@property (nonatomic) BOOL siriTCPSuccess;
@property (nonatomic) BOOL siriTLSResultsValid;
@property (nonatomic) BOOL siriTLSSuccess;
@property (nonatomic) int siriTrafficClass;
@property (copy, nonatomic) NSString *statusForDNS;
@property (copy, nonatomic) NSString *statusForInternet;
@property (copy, nonatomic) NSString *statusForLocal;
@property (copy, nonatomic) NSString *statusForSiriTCP;
@property (copy, nonatomic) NSString *statusForSiriTLS;
@property (retain, nonatomic) WADeviceAnalyticsFaultRecord *fault;

+ (id)fetchRequest;
+ (id)unusedSuperEntityProperties;

@end
