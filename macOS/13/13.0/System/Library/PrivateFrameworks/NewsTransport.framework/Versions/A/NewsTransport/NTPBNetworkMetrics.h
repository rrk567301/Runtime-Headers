@class NSMutableArray;

@interface NTPBNetworkMetrics : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *successes;
@property (retain, nonatomic) NSMutableArray *failures;

+ (Class)successesType;
+ (Class)failuresType;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)failuresCount;
- (void)clearSuccesses;
- (void)addSuccesses:(id)a0;
- (unsigned long long)successesCount;
- (id)successesAtIndex:(unsigned long long)a0;
- (void)clearFailures;
- (void)addFailures:(id)a0;
- (id)failuresAtIndex:(unsigned long long)a0;

@end
