@class PBUnknownFields;

@interface GEOPreferenceEntity : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _chargingNetworkMuid;
    unsigned long long _chargingStationMuid;
    struct { unsigned char has_chargingNetworkMuid : 1; unsigned char has_chargingStationMuid : 1; } _flags;
}

@property (nonatomic) BOOL hasChargingNetworkMuid;
@property (nonatomic) unsigned long long chargingNetworkMuid;
@property (nonatomic) BOOL hasChargingStationMuid;
@property (nonatomic) unsigned long long chargingStationMuid;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;

@end
