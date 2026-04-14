@class NSMutableArray, PBUnknownFields;

@interface GEOPDResultRefinementBar : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_resultRefinements;
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
