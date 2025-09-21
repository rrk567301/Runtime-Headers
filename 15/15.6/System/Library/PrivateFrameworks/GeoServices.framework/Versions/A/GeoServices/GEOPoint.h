@class PBUnknownFields;

@interface GEOPoint : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _elevationCm;
    unsigned int _offsetM;
    struct { unsigned char has_elevationCm : 1; unsigned char has_offsetM : 1; } _flags;
}

@property (nonatomic) char hasOffsetM;
@property (nonatomic) unsigned int offsetM;
@property (nonatomic) char hasElevationCm;
@property (nonatomic) int elevationCm;
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
