@class PBUnknownFields;

@interface GEOPDOverallFilterReason : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _proxyErrorHttpStatus;
    int _reasonType;
    struct { unsigned char has_proxyErrorHttpStatus : 1; unsigned char has_reasonType : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
