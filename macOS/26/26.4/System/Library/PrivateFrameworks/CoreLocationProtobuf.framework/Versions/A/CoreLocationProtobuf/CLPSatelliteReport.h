@class CLPSatelliteInfo;

@interface CLPSatelliteReport : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasGps;
@property (retain, nonatomic) CLPSatelliteInfo *gps;
@property (readonly, nonatomic) BOOL hasGlonass;
@property (retain, nonatomic) CLPSatelliteInfo *glonass;
@property (readonly, nonatomic) BOOL hasQzss;
@property (retain, nonatomic) CLPSatelliteInfo *qzss;
@property (readonly, nonatomic) BOOL hasGalileo;
@property (retain, nonatomic) CLPSatelliteInfo *galileo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
