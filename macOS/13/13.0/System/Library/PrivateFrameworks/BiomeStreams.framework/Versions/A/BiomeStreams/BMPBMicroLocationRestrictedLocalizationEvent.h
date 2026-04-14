@class NSString, NSMutableArray;

@interface BMPBMicroLocationRestrictedLocalizationEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimeStamp : 1; unsigned char maxProbability : 1; } _has;
}

@property (nonatomic) BOOL hasAbsoluteTimeStamp;
@property (nonatomic) double absoluteTimeStamp;
@property (readonly, nonatomic) BOOL hasClientBundleId;
@property (retain, nonatomic) NSString *clientBundleId;
@property (readonly, nonatomic) BOOL hasMaxProbabilityLabel;
@property (retain, nonatomic) NSString *maxProbabilityLabel;
@property (nonatomic) BOOL hasMaxProbability;
@property (nonatomic) double maxProbability;
@property (retain, nonatomic) NSMutableArray *probabilityVectors;
@property (retain, nonatomic) NSMutableArray *numDevicesVectors;

+ (Class)probabilityVectorType;
+ (Class)numDevicesVectorType;

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
- (void)clearProbabilityVectors;
- (void)addProbabilityVector:(id)a0;
- (unsigned long long)probabilityVectorsCount;
- (id)probabilityVectorAtIndex:(unsigned long long)a0;
- (void)clearNumDevicesVectors;
- (void)addNumDevicesVector:(id)a0;
- (unsigned long long)numDevicesVectorsCount;
- (id)numDevicesVectorAtIndex:(unsigned long long)a0;

@end
