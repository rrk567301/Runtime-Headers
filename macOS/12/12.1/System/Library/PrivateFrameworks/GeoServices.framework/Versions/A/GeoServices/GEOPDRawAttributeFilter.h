@class NSMutableArray, PBUnknownFields;

@interface GEOPDRawAttributeFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_keys;
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
