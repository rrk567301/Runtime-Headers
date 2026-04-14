@class PBUnknownFields;

@interface GEOPDAutocompleteResultSortPriorityMapping : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _resultSubtype;
    int _resultType;
    int _sortPriority;
    struct { unsigned char has_resultSubtype : 1; unsigned char has_resultType : 1; unsigned char has_sortPriority : 1; } _flags;
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
