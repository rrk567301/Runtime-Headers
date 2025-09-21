@class PBUnknownFields;

@interface GEOPDSSearchStructureIntentRequestType : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _intentType;
    int _structureType;
    struct { unsigned char has_intentType : 1; unsigned char has_structureType : 1; } _flags;
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
