@class GEOChargingNetworkInfo;

@interface GEORoutingFeaturesInfo : PBCodable <NSCopying> {
    GEOChargingNetworkInfo *_chargingNetworkInfo;
    int _destinationVariant;
    struct { unsigned char has_destinationVariant : 1; } _flags;
}

@property (nonatomic) char hasDestinationVariant;
@property (nonatomic) int destinationVariant;
@property (readonly, nonatomic) char hasChargingNetworkInfo;
@property (retain, nonatomic) GEOChargingNetworkInfo *chargingNetworkInfo;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDestinationVariant:(id)a0;
- (id)destinationVariantAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
