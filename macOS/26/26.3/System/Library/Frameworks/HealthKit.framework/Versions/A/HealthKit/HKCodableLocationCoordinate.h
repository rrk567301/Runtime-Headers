@interface HKCodableLocationCoordinate : PBCodable <NSCopying> {
    struct { unsigned char latitude : 1; unsigned char longitude : 1; } _has;
}

@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) double longitude;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
