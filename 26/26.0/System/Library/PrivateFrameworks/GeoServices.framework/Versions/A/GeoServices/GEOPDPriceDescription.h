@class NSString, PBUnknownFields;

@interface GEOPDPriceDescription : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_priceDescription;
}

+ (id)priceDescriptionForPlaceData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
