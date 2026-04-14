@class PBUnknownFields;

@interface GEOPDMapsSuggestionsTouristInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _isTourist;
    struct { unsigned char has_isTourist : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
