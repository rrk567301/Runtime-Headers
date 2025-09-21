@class NSString;

@interface AWDWiFiMetricIPv4DHCPLatency : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char dhcpLatencyMilliSecs : 1; unsigned char dhcpLeaseMins : 1; unsigned char securityType : 1; } _has;
}

@property (nonatomic) char hasDhcpLatencyMilliSecs;
@property (nonatomic) unsigned int dhcpLatencyMilliSecs;
@property (nonatomic) char hasSecurityType;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) char hasDhcpLeaseMins;
@property (nonatomic) unsigned int dhcpLeaseMins;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasPrivateMacType;
@property (retain, nonatomic) NSString *privateMacType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
