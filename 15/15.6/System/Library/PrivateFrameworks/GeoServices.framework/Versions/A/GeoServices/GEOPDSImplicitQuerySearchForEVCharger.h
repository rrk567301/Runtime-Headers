@class PBUnknownFields;

@interface GEOPDSImplicitQuerySearchForEVCharger : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _encryptedCurrentEvchargerStopMuid;
    struct { unsigned char has_encryptedCurrentEvchargerStopMuid : 1; } _flags;
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
