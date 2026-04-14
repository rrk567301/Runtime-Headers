@class PBUnknownFields;

@interface GEOPDTransitAssociatedInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _alewifeId;
    struct { unsigned char has_alewifeId : 1; } _flags;
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
