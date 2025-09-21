@class PBUnknownFields;

@interface GEOPDSupportsOfflineMaps : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _offlinePlacecardSuggestion;
    BOOL _supportsOfflineMaps;
    struct { unsigned char has_offlinePlacecardSuggestion : 1; unsigned char has_supportsOfflineMaps : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
