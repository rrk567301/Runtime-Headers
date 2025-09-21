@class GEOPDFactoid, PBUnknownFields;

@interface GEOPDFactoidData : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDFactoid *_factoid;
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
