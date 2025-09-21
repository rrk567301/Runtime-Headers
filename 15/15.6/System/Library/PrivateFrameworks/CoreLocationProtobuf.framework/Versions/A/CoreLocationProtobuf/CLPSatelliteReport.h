@class CLPSatelliteInfo;

@interface CLPSatelliteReport : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasGps;
@property (retain, nonatomic) CLPSatelliteInfo *gps;
@property (readonly, nonatomic) char hasGlonass;
@property (retain, nonatomic) CLPSatelliteInfo *glonass;
@property (readonly, nonatomic) char hasQzss;
@property (retain, nonatomic) CLPSatelliteInfo *qzss;
@property (readonly, nonatomic) char hasGalileo;
@property (retain, nonatomic) CLPSatelliteInfo *galileo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
