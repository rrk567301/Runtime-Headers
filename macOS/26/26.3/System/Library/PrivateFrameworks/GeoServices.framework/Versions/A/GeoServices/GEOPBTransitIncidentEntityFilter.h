@class PBUnknownFields;

@interface GEOPBTransitIncidentEntityFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _nextStopMuids;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
