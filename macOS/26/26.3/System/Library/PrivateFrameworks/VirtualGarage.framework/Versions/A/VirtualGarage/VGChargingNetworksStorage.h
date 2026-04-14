@class NSMutableArray;

@interface VGChargingNetworksStorage : PBCodable <NSCopying> {
    struct { unsigned char usesPreferredNetworksForRouting : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *networks;
@property (nonatomic) BOOL hasUsesPreferredNetworksForRouting;
@property (nonatomic) BOOL usesPreferredNetworksForRouting;

+ (Class)networksType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addNetworks:(id)a0;
- (void)clearNetworks;
- (id)networksAtIndex:(unsigned long long)a0;
- (unsigned long long)networksCount;

@end
