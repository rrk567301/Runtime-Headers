@class GEOChargingNetworkInfo;

@interface GEORoutingFeaturesInfo : PBCodable <NSCopying> {
    GEOChargingNetworkInfo *_chargingNetworkInfo;
    int _destinationVariant;
    struct { unsigned char has_destinationVariant : 1; } _flags;
}

@property (nonatomic) BOOL hasDestinationVariant;
@property (nonatomic) int destinationVariant;
@property (readonly, nonatomic) BOOL hasChargingNetworkInfo;
@property (retain, nonatomic) GEOChargingNetworkInfo *chargingNetworkInfo;

+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (int)StringAsDestinationVariant:(id)a0;
- (id)destinationVariantAsString:(int)a0;

@end
