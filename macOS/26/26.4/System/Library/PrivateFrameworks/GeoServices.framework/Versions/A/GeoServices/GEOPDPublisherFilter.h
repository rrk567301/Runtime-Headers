@class PBUnknownFields;

@interface GEOPDPublisherFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _partiallyClientize;
    struct { unsigned char has_partiallyClientize : 1; } _flags;
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
