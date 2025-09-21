@interface CLPIndoorPressure : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char pressure : 1; unsigned char temperature : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasPressure;
@property (nonatomic) float pressure;
@property (nonatomic) char hasTemperature;
@property (nonatomic) float temperature;

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
