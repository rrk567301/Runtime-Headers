@class PBUnknownFields;

@interface GEOPBTransitLineDisplayHints : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    char _showVehicleNumber;
    struct { unsigned char has_showVehicleNumber : 1; } _flags;
}

@property (nonatomic) char hasShowVehicleNumber;
@property (nonatomic) char showVehicleNumber;
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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
