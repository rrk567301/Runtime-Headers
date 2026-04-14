@class NTPBBinningConfig, NTPBPersonalizationTreatment, NSMutableArray;

@interface NTPBPersonalizationConfig : PBCodable <NSCopying> {
    struct { unsigned char moduloForHashing : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBinningConfig;
@property (retain, nonatomic) NTPBBinningConfig *binningConfig;
@property (nonatomic) BOOL hasModuloForHashing;
@property (nonatomic) long long moduloForHashing;
@property (readonly, nonatomic) BOOL hasDefaultPersonalizationTreatment;
@property (retain, nonatomic) NTPBPersonalizationTreatment *defaultPersonalizationTreatment;
@property (retain, nonatomic) NSMutableArray *personalizationBuckets;
@property (retain, nonatomic) NSMutableArray *personalizationTreatments;

+ (Class)personalizationBucketsType;
+ (Class)personalizationTreatmentsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearPersonalizationBuckets;
- (void)addPersonalizationBuckets:(id)a0;
- (unsigned long long)personalizationBucketsCount;
- (id)personalizationBucketsAtIndex:(unsigned long long)a0;
- (void)clearPersonalizationTreatments;
- (void)addPersonalizationTreatments:(id)a0;
- (unsigned long long)personalizationTreatmentsCount;
- (id)personalizationTreatmentsAtIndex:(unsigned long long)a0;

@end
