@class PBUnknownFields;

@interface GEOPDOverallFilterReason : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _proxyErrorHttpStatus;
    int _reasonType;
    struct { unsigned char has_proxyErrorHttpStatus : 1; unsigned char has_reasonType : 1; } _flags;
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
