@class PBUnknownFields;

@interface GEOPoint : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _elevationCm;
    unsigned int _offsetM;
    struct { unsigned char has_elevationCm : 1; unsigned char has_offsetM : 1; } _flags;
}

@property (nonatomic) BOOL hasOffsetM;
@property (nonatomic) unsigned int offsetM;
@property (nonatomic) BOOL hasElevationCm;
@property (nonatomic) int elevationCm;
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

@end
