@class PBUnknownFields;

@interface GEOPDLocatedInsideInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    int _featureType;
    struct { unsigned char has_muid : 1; unsigned char has_featureType : 1; } _flags;
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
