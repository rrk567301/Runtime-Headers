@class PBUnknownFields;

@interface GEOPDOverallFilterReason : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _proxyErrorHttpStatus;
    int _reasonType;
    struct { unsigned char has_proxyErrorHttpStatus : 1; unsigned char has_reasonType : 1; } _flags;
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
