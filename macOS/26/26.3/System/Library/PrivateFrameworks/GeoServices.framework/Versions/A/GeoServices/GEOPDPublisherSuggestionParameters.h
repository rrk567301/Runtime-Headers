@class GEOPDViewportInfo, PBUnknownFields;

@interface GEOPDPublisherSuggestionParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _requestLocalTimestamp;
    GEOPDViewportInfo *_viewportInfo;
    struct { unsigned char has_requestLocalTimestamp : 1; } _flags;
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
