@class NSString;

@interface AWDNetworkServiceProxyProbeStatistics : PBCodable <NSCopying> {
    struct { unsigned char alternateProbeTimeMsecs : 1; unsigned char genericDNSProbeTimeMsecs : 1; unsigned char genericProbeTimeMsecs : 1; unsigned char timestamp : 1; unsigned char interfaceType : 1; unsigned char protocolType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasInterfaceType;
@property (nonatomic) int interfaceType;
@property (readonly, nonatomic) char hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) char hasAlternateProbeTimeMsecs;
@property (nonatomic) unsigned long long alternateProbeTimeMsecs;
@property (nonatomic) char hasGenericProbeTimeMsecs;
@property (nonatomic) unsigned long long genericProbeTimeMsecs;
@property (nonatomic) char hasGenericDNSProbeTimeMsecs;
@property (nonatomic) unsigned long long genericDNSProbeTimeMsecs;
@property (nonatomic) char hasProtocolType;
@property (nonatomic) int protocolType;

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
- (int)StringAsProtocolType:(id)a0;
- (int)StringAsInterfaceType:(id)a0;
- (id)interfaceTypeAsString:(int)a0;
- (id)protocolTypeAsString:(int)a0;

@end
