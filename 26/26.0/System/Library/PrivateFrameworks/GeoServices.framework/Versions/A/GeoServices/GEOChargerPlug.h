@class PBUnknownFields;

@interface GEOChargerPlug : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _maximumPower;
    unsigned int _maximumVoltage;
    int _type;
    struct { unsigned char has_maximumPower : 1; unsigned char has_maximumVoltage : 1; unsigned char has_type : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasMaximumPower;
@property (nonatomic) unsigned int maximumPower;
@property (nonatomic) BOOL hasMaximumVoltage;
@property (nonatomic) unsigned int maximumVoltage;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)typeAsString:(int)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (int)StringAsType:(id)a0;
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
