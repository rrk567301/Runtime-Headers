@class NSMutableArray, PBUnknownFields;

@interface GEOPDResultRefinementRangeDiscrete : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_elements;
    unsigned int _selectedMaxElementIndex;
    unsigned int _selectedMinElementIndex;
    struct { unsigned char has_selectedMaxElementIndex : 1; unsigned char has_selectedMinElementIndex : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
