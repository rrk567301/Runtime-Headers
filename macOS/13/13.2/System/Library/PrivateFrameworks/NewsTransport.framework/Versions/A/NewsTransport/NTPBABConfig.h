@class NTPBConfig, NSMutableArray;

@interface NTPBABConfig : PBCodable <NSCopying> {
    struct { unsigned char populationCeiling : 1; unsigned char populationFloor : 1; } _has;
}

@property (nonatomic) BOOL hasPopulationFloor;
@property (nonatomic) long long populationFloor;
@property (nonatomic) BOOL hasPopulationCeiling;
@property (nonatomic) long long populationCeiling;
@property (readonly, nonatomic) BOOL hasConfigControl;
@property (retain, nonatomic) NTPBConfig *configControl;
@property (retain, nonatomic) NSMutableArray *configBuckets;

+ (Class)configBucketsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearConfigBuckets;
- (void)addConfigBuckets:(id)a0;
- (unsigned long long)configBucketsCount;
- (id)configBucketsAtIndex:(unsigned long long)a0;

@end
