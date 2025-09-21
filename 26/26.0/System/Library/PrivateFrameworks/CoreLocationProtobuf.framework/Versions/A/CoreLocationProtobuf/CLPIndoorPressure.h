@interface CLPIndoorPressure : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char pressure : 1; unsigned char temperature : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasPressure;
@property (nonatomic) float pressure;
@property (nonatomic) BOOL hasTemperature;
@property (nonatomic) float temperature;

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
