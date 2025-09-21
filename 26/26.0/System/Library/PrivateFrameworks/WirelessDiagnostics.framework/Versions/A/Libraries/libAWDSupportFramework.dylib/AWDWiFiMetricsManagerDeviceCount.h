@interface AWDWiFiMetricsManagerDeviceCount : PBCodable <NSCopying> {
    struct { unsigned char timeSinceBoot : 1; unsigned char timestamp : 1; unsigned char deviceCount : 1; unsigned char deviceIdentifierMap : 1; unsigned char deviceInitFailureReason : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDeviceCount;
@property (nonatomic) unsigned int deviceCount;
@property (nonatomic) BOOL hasTimeSinceBoot;
@property (nonatomic) double timeSinceBoot;
@property (nonatomic) BOOL hasDeviceIdentifierMap;
@property (nonatomic) unsigned int deviceIdentifierMap;
@property (nonatomic) BOOL hasDeviceInitFailureReason;
@property (nonatomic) unsigned int deviceInitFailureReason;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
