@class GEOPDFactoid, PBUnknownFields;

@interface GEOPDFactoidData : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDFactoid *_factoid;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
