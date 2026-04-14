@class NSString, PCPLocation;

@interface PCPClusterEmbeddingLocation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPlaceName;
@property (retain, nonatomic) NSString *placeName;
@property (readonly, nonatomic) BOOL hasPlaceType;
@property (retain, nonatomic) NSString *placeType;
@property (readonly, nonatomic) BOOL hasPlaceLocation;
@property (retain, nonatomic) PCPLocation *placeLocation;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
