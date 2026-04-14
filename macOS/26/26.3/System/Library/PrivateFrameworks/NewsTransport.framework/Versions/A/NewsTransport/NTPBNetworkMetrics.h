@class NSMutableArray;

@interface NTPBNetworkMetrics : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *successes;
@property (retain, nonatomic) NSMutableArray *failures;

+ (Class)failuresType;
+ (Class)successesType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)failuresCount;
- (void)addFailures:(id)a0;
- (void)clearFailures;
- (id)failuresAtIndex:(unsigned long long)a0;
- (void)addSuccesses:(id)a0;
- (void)clearSuccesses;
- (id)successesAtIndex:(unsigned long long)a0;
- (unsigned long long)successesCount;

@end
