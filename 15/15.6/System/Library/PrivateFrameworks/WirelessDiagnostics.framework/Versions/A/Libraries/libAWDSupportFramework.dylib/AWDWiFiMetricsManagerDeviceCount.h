@interface AWDWiFiMetricsManagerDeviceCount : PBCodable <NSCopying> {
    struct { unsigned char timeSinceBoot : 1; unsigned char timestamp : 1; unsigned char deviceCount : 1; unsigned char deviceIdentifierMap : 1; unsigned char deviceInitFailureReason : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDeviceCount;
@property (nonatomic) unsigned int deviceCount;
@property (nonatomic) char hasTimeSinceBoot;
@property (nonatomic) double timeSinceBoot;
@property (nonatomic) char hasDeviceIdentifierMap;
@property (nonatomic) unsigned int deviceIdentifierMap;
@property (nonatomic) char hasDeviceInitFailureReason;
@property (nonatomic) unsigned int deviceInitFailureReason;

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
