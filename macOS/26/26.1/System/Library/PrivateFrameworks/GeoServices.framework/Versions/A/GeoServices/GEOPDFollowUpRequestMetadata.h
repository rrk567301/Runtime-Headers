@class PBUnknownFields;

@interface GEOPDFollowUpRequestMetadata : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _dataType;
    int _requestType;
    struct { unsigned char has_dataType : 1; unsigned char has_requestType : 1; } _flags;
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
