@class NSMutableArray;

@interface SIRINLUINTERNALSNLP_INTERMEDIATELinearizedTensor : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _numericalizedFeatures;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _shapes;
}

@property (readonly, nonatomic) unsigned long long shapesCount;
@property (readonly, nonatomic) unsigned int *shapes;
@property (readonly, nonatomic) unsigned long long numericalizedFeaturesCount;
@property (readonly, nonatomic) unsigned int *numericalizedFeatures;
@property (retain, nonatomic) NSMutableArray *features;

+ (Class)featureType;

- (void)dealloc;
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
- (void)clearFeatures;
- (void)addFeature:(id)a0;
- (unsigned long long)featuresCount;
- (id)featureAtIndex:(unsigned long long)a0;
- (void)addShape:(unsigned int)a0;
- (void)clearShapes;
- (unsigned int)shapeAtIndex:(unsigned long long)a0;
- (void)setShapes:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)clearNumericalizedFeatures;
- (void)addNumericalizedFeature:(unsigned int)a0;
- (unsigned int)numericalizedFeatureAtIndex:(unsigned long long)a0;
- (void)setNumericalizedFeatures:(unsigned int *)a0 count:(unsigned long long)a1;

@end
