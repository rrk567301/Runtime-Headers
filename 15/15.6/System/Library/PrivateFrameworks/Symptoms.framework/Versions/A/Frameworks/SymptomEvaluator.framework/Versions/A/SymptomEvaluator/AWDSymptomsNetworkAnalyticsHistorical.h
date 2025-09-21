@class NSString;

@interface AWDSymptomsNetworkAnalyticsHistorical : PBCodable <NSCopying> {
    struct { unsigned char bytesIn : 1; unsigned char bytesOut : 1; unsigned char connAttempts : 1; unsigned char connSuccess : 1; unsigned char dnsCompleteFailures : 1; unsigned char dnsPartialFailures : 1; unsigned char epochs : 1; unsigned char faultyStaySecs : 1; unsigned char packetsIn : 1; unsigned char packetsOut : 1; unsigned char secsSinceLastTrimmed : 1; unsigned char timestamp : 1; unsigned char totalStaySecs : 1; unsigned char networkType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) char hasEpochs;
@property (nonatomic) unsigned long long epochs;
@property (nonatomic) char hasTotalStaySecs;
@property (nonatomic) unsigned long long totalStaySecs;
@property (nonatomic) char hasFaultyStaySecs;
@property (nonatomic) unsigned long long faultyStaySecs;
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
@property (nonatomic) char hasSecsSinceLastTrimmed;
@property (nonatomic) unsigned long long secsSinceLastTrimmed;
@property (nonatomic) char hasDnsPartialFailures;
@property (nonatomic) unsigned long long dnsPartialFailures;
@property (nonatomic) char hasDnsCompleteFailures;
@property (nonatomic) unsigned long long dnsCompleteFailures;

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
