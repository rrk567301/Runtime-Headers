@class PBUnknownFields;

@interface GEOPDOverallFilterReason : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _proxyErrorHttpStatus;
    int _reasonType;
    struct { unsigned char has_proxyErrorHttpStatus : 1; unsigned char has_reasonType : 1; } _flags;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;

@end
