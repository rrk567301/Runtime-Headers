@class PBUnknownFields;

@interface GEOPDSTransportHint : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _transportType;
    struct { unsigned char has_transportType : 1; } _flags;
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
