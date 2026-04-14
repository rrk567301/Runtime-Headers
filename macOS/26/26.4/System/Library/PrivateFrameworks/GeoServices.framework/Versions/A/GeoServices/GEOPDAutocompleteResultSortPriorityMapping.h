@class PBUnknownFields;

@interface GEOPDAutocompleteResultSortPriorityMapping : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _resultSubtype;
    int _resultType;
    int _sortPriority;
    struct { unsigned char has_resultSubtype : 1; unsigned char has_resultType : 1; unsigned char has_sortPriority : 1; } _flags;
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
