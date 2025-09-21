@class PBUnknownFields;

@interface GEONearbyTransitGroup : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _linesShown;
    unsigned int _lines;
    struct { unsigned char has_linesShown : 1; unsigned char has_lines : 1; } _flags;
}

@property (nonatomic) char hasLines;
@property (nonatomic) unsigned int lines;
@property (nonatomic) char hasLinesShown;
@property (nonatomic) unsigned int linesShown;
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
