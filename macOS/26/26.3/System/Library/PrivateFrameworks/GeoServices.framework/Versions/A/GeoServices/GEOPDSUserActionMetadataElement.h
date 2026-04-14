@class PBUnknownFields;

@interface GEOPDSUserActionMetadataElement : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _uiAction;
    int _uiTarget;
    struct { unsigned char has_uiAction : 1; unsigned char has_uiTarget : 1; } _flags;
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
