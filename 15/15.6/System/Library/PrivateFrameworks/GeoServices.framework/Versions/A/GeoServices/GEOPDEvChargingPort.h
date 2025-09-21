@class PBUnknownFields;

@interface GEOPDEvChargingPort : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _chargingConnectorType;
    int _chargingLevel;
    unsigned int _power;
    struct { unsigned char has_chargingConnectorType : 1; unsigned char has_chargingLevel : 1; unsigned char has_power : 1; } _flags;
}

@property (nonatomic) char hasPower;
@property (nonatomic) unsigned int power;
@property (nonatomic) char hasChargingConnectorType;
@property (nonatomic) int chargingConnectorType;
@property (nonatomic) char hasChargingLevel;
@property (nonatomic) int chargingLevel;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsChargingConnectorType:(id)a0;
- (int)StringAsChargingLevel:(id)a0;
- (id)chargingConnectorTypeAsString:(int)a0;
- (id)chargingLevelAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
