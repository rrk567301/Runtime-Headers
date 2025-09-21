@class NSDecimalNumber, NSString, FaultMO, NSDate, BSSMO;

@interface LinkTestMO : NSManagedObject

@property (nonatomic) char badDNSServers;
@property (nonatomic) char badGateway;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) char dnsResultsValid;
@property (nonatomic) char dnsSuccess;
@property (nonatomic) char foundCriticalFailure;
@property (copy, nonatomic) NSDecimalNumber *gatewayMaxRTT;
@property (copy, nonatomic) NSDecimalNumber *gatewayMinRTT;
@property (copy, nonatomic) NSDecimalNumber *gatewayPacketLoss;
@property (nonatomic) char gatewayResultsValid;
@property (copy, nonatomic) NSString *initiatingReason;
@property (nonatomic) char isTriggeredByFault;
@property (copy, nonatomic) NSDecimalNumber *localDNSMaxRTT;
@property (copy, nonatomic) NSDecimalNumber *localDNSMinRTT;
@property (copy, nonatomic) NSDecimalNumber *localDNSPacketLoss;
@property (nonatomic) char localResultsValid;
@property (copy, nonatomic) NSDecimalNumber *publicDNSMaxRTT;
@property (copy, nonatomic) NSDecimalNumber *publicDNSMinRTT;
@property (copy, nonatomic) NSDecimalNumber *publicDNSPacketLoss;
@property (nonatomic) char publicResultsValid;
@property (nonatomic) char seenSpecificAcFailure;
@property (nonatomic) char siriTCPResultsValid;
@property (nonatomic) char siriTCPSuccess;
@property (nonatomic) char siriTLSResultsValid;
@property (nonatomic) char siriTLSSuccess;
@property (nonatomic) int siriTrafficClass;
@property (copy, nonatomic) NSString *statusForDNS;
@property (copy, nonatomic) NSString *statusForInternet;
@property (copy, nonatomic) NSString *statusForLocal;
@property (copy, nonatomic) NSString *statusForSiriTCP;
@property (copy, nonatomic) NSString *statusForSiriTLS;
@property (retain, nonatomic) BSSMO *bss;
@property (retain, nonatomic) FaultMO *fault;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateInstance:(id)a0;

@end
