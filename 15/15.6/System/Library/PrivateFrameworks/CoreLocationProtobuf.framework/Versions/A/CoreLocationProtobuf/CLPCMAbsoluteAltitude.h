@interface CLPCMAbsoluteAltitude : PBCodable <NSCopying> {
    struct { unsigned char accuracy : 1; unsigned char filteredPressure : 1; unsigned char precision : 1; unsigned char statusInfo : 1; } _has;
}

@property (nonatomic) double timestamp;
@property (nonatomic) double altitude;
@property (nonatomic) char hasAccuracy;
@property (nonatomic) double accuracy;
@property (nonatomic) char hasPrecision;
@property (nonatomic) double precision;
@property (nonatomic) char hasFilteredPressure;
@property (nonatomic) double filteredPressure;
@property (nonatomic) char hasStatusInfo;
@property (nonatomic) int statusInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsStatusInfo:(id)a0;
- (id)statusInfoAsString:(int)a0;

@end
