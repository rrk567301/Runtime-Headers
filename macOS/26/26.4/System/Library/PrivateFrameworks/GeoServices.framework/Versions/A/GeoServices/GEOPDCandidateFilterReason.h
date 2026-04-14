@class GEOPDResultRefinementMetadata, PBUnknownFields;

@interface GEOPDCandidateFilterReason : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDResultRefinementMetadata *_sortMetadata;
    int _reasonType;
    float _viewportExpansionFactor;
    struct { unsigned char has_reasonType : 1; unsigned char has_viewportExpansionFactor : 1; } _flags;
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
