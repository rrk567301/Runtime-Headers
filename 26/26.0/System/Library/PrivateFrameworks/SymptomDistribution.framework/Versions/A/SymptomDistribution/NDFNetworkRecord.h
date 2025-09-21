@class NSUUID, NSString, NSData, NSDate;

@interface NDFNetworkRecord : NSManagedObject

@property (nonatomic, copy) NSUUID *deviceIdentifier;
@property (nonatomic) double nwBackhaulBrokenRate;
@property (nonatomic) double nwBackhaulBrokenStay;
@property (nonatomic) int nwCertErrors;
@property (nonatomic) int nwConnAttempts;
@property (nonatomic) int nwConnSuccesses;
@property (nonatomic) int nwDataStalls;
@property (nonatomic) double nwDHCPFailureRate;
@property (nonatomic) double nwDHCPFailureStay;
@property (nonatomic) double nwDNSOutRate;
@property (nonatomic) double nwDNSOutStay;
@property (nonatomic) double nwInternetDNSOutRate;
@property (nonatomic) double nwInternetDNSOutStay;
@property (nonatomic, copy) NSString *nwObscuredSSID;
@property (nonatomic) long long nwPacketsIn;
@property (nonatomic) long long nwPacketsOut;
@property (nonatomic) double nwRTTAvg;
@property (nonatomic, copy) NSData *nwSignatureIPv4;
@property (nonatomic, copy) NSData *nwSignatureIPv6;
@property (nonatomic) double nwWiFiHighCongestionRate;
@property (nonatomic) double nwWiFiHighCongestionStay;
@property (nonatomic) double nwWiFiLowLQMStay;
@property (nonatomic) short nwWiFiLQM;
@property (nonatomic) double nwWiFiLQMTransitionRate;
@property (nonatomic) double nwWiFiRSSI;
@property (nonatomic) double nwWiFiRxRate;
@property (nonatomic) short nwWiFiRxThresholded;
@property (nonatomic) short nwWiFiSNR;
@property (nonatomic) double nwWiFiTxRate;
@property (nonatomic) double recordInterval;
@property (nonatomic) short recordVersion;
@property (nonatomic, copy) NSDate *timestamp;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
