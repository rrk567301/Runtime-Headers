@class NSMutableArray;

@interface AWDCoreRoutineMagicalMomentsExpertInstance : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char expertType : 1; unsigned char modelType : 1; unsigned char sampleCounts : 1; } _has;
}

@property (nonatomic) char hasModelType;
@property (nonatomic) int modelType;
@property (nonatomic) char hasExpertType;
@property (nonatomic) int expertType;
@property (nonatomic) char hasConfidence;
@property (nonatomic) int confidence;
@property (nonatomic) char hasSampleCounts;
@property (nonatomic) int sampleCounts;
@property (retain, nonatomic) NSMutableArray *instances;
@property (retain, nonatomic) NSMutableArray *addons;

+ (Class)addonsType;
+ (Class)instancesType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)instancesCount;
- (void)addAddons:(id)a0;
- (void)addInstances:(id)a0;
- (id)addonsAtIndex:(unsigned long long)a0;
- (unsigned long long)addonsCount;
- (void)clearAddons;
- (void)clearInstances;
- (id)instancesAtIndex:(unsigned long long)a0;

@end
