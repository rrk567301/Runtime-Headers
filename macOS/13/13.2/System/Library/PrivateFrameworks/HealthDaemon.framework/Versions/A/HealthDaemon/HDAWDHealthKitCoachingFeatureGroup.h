@class NSMutableArray;

@interface HDAWDHealthKitCoachingFeatureGroup : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pasts;
@property (retain, nonatomic) NSMutableArray *futures;

+ (Class)pastType;
+ (Class)futureType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearPasts;
- (void)addPast:(id)a0;
- (unsigned long long)pastsCount;
- (id)pastAtIndex:(unsigned long long)a0;
- (void)clearFutures;
- (void)addFuture:(id)a0;
- (unsigned long long)futuresCount;
- (id)futureAtIndex:(unsigned long long)a0;

@end
