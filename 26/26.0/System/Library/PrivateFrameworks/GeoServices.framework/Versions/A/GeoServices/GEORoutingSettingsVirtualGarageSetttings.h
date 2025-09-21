@class PBUnknownFields;

@interface GEORoutingSettingsVirtualGarageSetttings : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _electronicVehicleCount;
    int _licensePlateCount;
    struct { unsigned char has_electronicVehicleCount : 1; unsigned char has_licensePlateCount : 1; } _flags;
}

@property (nonatomic) BOOL hasElectronicVehicleCount;
@property (nonatomic) int electronicVehicleCount;
@property (nonatomic) BOOL hasLicensePlateCount;
@property (nonatomic) int licensePlateCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
