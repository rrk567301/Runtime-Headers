@class PBUnknownFields;

@interface GEOPDAutocompleteEntryHighlightSpan : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _length;
    unsigned int _startIndex;
    struct { unsigned char has_length : 1; unsigned char has_startIndex : 1; } _flags;
}

@property (nonatomic) char hasStartIndex;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) char hasLength;
@property (nonatomic) unsigned int length;
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
