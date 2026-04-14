@class NSString, PBUnknownFields;

@interface GEOPDPriceDescription : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_priceDescription;
}

+ (id)priceDescriptionForPlaceData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
