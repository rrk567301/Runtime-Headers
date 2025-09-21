@class NSString;

@interface AWDWiFiMetricsManagerUserBlacklistEvent : PBCodable <NSCopying> {
    struct { unsigned char blacklistDuration : 1; unsigned char dstChange : 1; unsigned char timestamp : 1; unsigned char trigger : 1; unsigned char eventType : 1; unsigned char locState : 1; unsigned char moState : 1; unsigned char securityType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasEventType;
@property (nonatomic) unsigned int eventType;
@property (readonly, nonatomic) char hasSsid;
@property (retain, nonatomic) NSString *ssid;
@property (nonatomic) char hasSecurityType;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) char hasTrigger;
@property (nonatomic) unsigned long long trigger;
@property (nonatomic) char hasBlacklistDuration;
@property (nonatomic) unsigned long long blacklistDuration;
@property (readonly, nonatomic) char hasApuuid;
@property (retain, nonatomic) NSString *apuuid;
@property (nonatomic) char hasDstChange;
@property (nonatomic) unsigned long long dstChange;
@property (nonatomic) char hasMoState;
@property (nonatomic) unsigned int moState;
@property (nonatomic) char hasLocState;
@property (nonatomic) unsigned int locState;

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
