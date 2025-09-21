@class NSString;

@interface AWDSymptomsNetworkAnalyticsInstant : PBCodable <NSCopying> {
    struct { unsigned char bytesIn : 1; unsigned char bytesOut : 1; unsigned char connAttempts : 1; unsigned char connSuccess : 1; unsigned char cumulInternetOutageSecs : 1; unsigned char lastReportedL2TxFail : 1; unsigned char lastReportedL2TxFrames : 1; unsigned char lastReportedL2TxReTry : 1; unsigned char packetsIn : 1; unsigned char packetsOut : 1; unsigned char rttMinUsecs : 1; unsigned char timestamp : 1; unsigned char arpThreshold : 1; unsigned char dnsServers : 1; unsigned char lastReportedLQM : 1; unsigned char lastReportedRSSI : 1; unsigned char networkType : 1; unsigned char penalizedDnsServers : 1; unsigned char rxSignalThreshold : 1; unsigned char arpThresholded : 1; unsigned char hasInternetConn : 1; unsigned char rxSignalThresholded : 1; unsigned char supportsIPv4 : 1; unsigned char supportsIPv6 : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) char hasHasInternetConn;
@property (nonatomic) char hasInternetConn;
@property (nonatomic) char hasCumulInternetOutageSecs;
@property (nonatomic) unsigned long long cumulInternetOutageSecs;
@property (nonatomic) char hasConnAttempts;
@property (nonatomic) unsigned long long connAttempts;
@property (nonatomic) char hasConnSuccess;
@property (nonatomic) unsigned long long connSuccess;
@property (nonatomic) char hasPacketsIn;
@property (nonatomic) unsigned long long packetsIn;
@property (nonatomic) char hasPacketsOut;
@property (nonatomic) unsigned long long packetsOut;
@property (nonatomic) char hasBytesIn;
@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) char hasBytesOut;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) char hasRttMinUsecs;
@property (nonatomic) unsigned long long rttMinUsecs;
@property (nonatomic) char hasDnsServers;
@property (nonatomic) unsigned int dnsServers;
@property (nonatomic) char hasPenalizedDnsServers;
@property (nonatomic) unsigned int penalizedDnsServers;
@property (nonatomic) char hasRxSignalThreshold;
@property (nonatomic) unsigned int rxSignalThreshold;
@property (nonatomic) char hasRxSignalThresholded;
@property (nonatomic) char rxSignalThresholded;
@property (nonatomic) char hasArpThreshold;
@property (nonatomic) unsigned int arpThreshold;
@property (nonatomic) char hasArpThresholded;
@property (nonatomic) char arpThresholded;
@property (nonatomic) char hasSupportsIPv4;
@property (nonatomic) char supportsIPv4;
@property (nonatomic) char hasSupportsIPv6;
@property (nonatomic) char supportsIPv6;
@property (nonatomic) char hasLastReportedRSSI;
@property (nonatomic) unsigned int lastReportedRSSI;
@property (nonatomic) char hasLastReportedLQM;
@property (nonatomic) int lastReportedLQM;
@property (nonatomic) char hasLastReportedL2TxFrames;
@property (nonatomic) unsigned long long lastReportedL2TxFrames;
@property (nonatomic) char hasLastReportedL2TxReTry;
@property (nonatomic) unsigned long long lastReportedL2TxReTry;
@property (nonatomic) char hasLastReportedL2TxFail;
@property (nonatomic) unsigned long long lastReportedL2TxFail;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;

@end
