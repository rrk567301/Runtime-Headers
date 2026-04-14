@class PBUnknownFields;

@interface GEOPDSRawAttribute : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _beginIndex;
    unsigned int _endIndex;
    struct { unsigned char has_beginIndex : 1; unsigned char has_endIndex : 1; } _flags;
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
