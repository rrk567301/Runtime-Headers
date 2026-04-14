@class PBUnknownFields;

@interface GEOPDTransitAssociatedInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _alewifeId;
    struct { unsigned char has_alewifeId : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
