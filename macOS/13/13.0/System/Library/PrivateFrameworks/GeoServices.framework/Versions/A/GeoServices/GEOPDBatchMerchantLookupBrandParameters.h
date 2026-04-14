@class NSMutableArray, PBUnknownFields;

@interface GEOPDBatchMerchantLookupBrandParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_merchantLookupBrandParameters;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
