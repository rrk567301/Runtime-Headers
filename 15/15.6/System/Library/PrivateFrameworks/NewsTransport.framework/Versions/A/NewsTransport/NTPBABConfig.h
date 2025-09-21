@class NTPBConfig, NSMutableArray;

@interface NTPBABConfig : PBCodable <NSCopying> {
    struct { unsigned char populationCeiling : 1; unsigned char populationFloor : 1; } _has;
}

@property (nonatomic) char hasPopulationFloor;
@property (nonatomic) long long populationFloor;
@property (nonatomic) char hasPopulationCeiling;
@property (nonatomic) long long populationCeiling;
@property (readonly, nonatomic) char hasConfigControl;
@property (retain, nonatomic) NTPBConfig *configControl;
@property (retain, nonatomic) NSMutableArray *configBuckets;

+ (Class)configBucketsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addConfigBuckets:(id)a0;
- (void)clearConfigBuckets;
- (id)configBucketsAtIndex:(unsigned long long)a0;
- (unsigned long long)configBucketsCount;

@end
