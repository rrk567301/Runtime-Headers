@class PBUnknownFields;

@interface GEOCommonResponseAttributes : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _elevationModel;
    struct { unsigned char has_elevationModel : 1; } _flags;
}

@property (nonatomic) BOOL hasElevationModel;
@property (nonatomic) int elevationModel;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (int)StringAsElevationModel:(id)a0;
- (id)elevationModelAsString:(int)a0;

@end
