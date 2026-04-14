@class PBUnknownFields;

@interface GEOPDFollowUpRequestMetadata : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _dataType;
    int _requestType;
    struct { unsigned char has_dataType : 1; unsigned char has_requestType : 1; } _flags;
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
