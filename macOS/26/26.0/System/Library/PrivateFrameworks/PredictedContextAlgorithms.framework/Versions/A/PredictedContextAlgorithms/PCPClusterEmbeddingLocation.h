@class NSString, PCPLocation;

@interface PCPClusterEmbeddingLocation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPlaceName;
@property (retain, nonatomic) NSString *placeName;
@property (readonly, nonatomic) BOOL hasPlaceType;
@property (retain, nonatomic) NSString *placeType;
@property (readonly, nonatomic) BOOL hasPlaceLocation;
@property (retain, nonatomic) PCPLocation *placeLocation;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
