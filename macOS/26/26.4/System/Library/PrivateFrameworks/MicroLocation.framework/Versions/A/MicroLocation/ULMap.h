@class NSArray, ULHomeSlamModelData, ULServiceMetaInfo, ULPredictionContext, ULLocationOfInterest;

@interface ULMap : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *mapItems;
@property (retain, nonatomic) ULPredictionContext *predictionContext;
@property (retain, nonatomic) ULLocationOfInterest *locationOfInterest;
@property (nonatomic) unsigned long long serviceState;
@property (retain, nonatomic) NSArray *serviceSuspendReasons;
@property (nonatomic) BOOL isMapValid;
@property (retain, nonatomic) ULServiceMetaInfo *metaInfo;
@property (retain, nonatomic) ULHomeSlamModelData *homeSlamModelData;

+ (id)emptyMap;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)labelsInSameSpaceForMapItem:(id)a0;
- (id)initWithMapItems:(id)a0 predictionContext:(id)a1 locationOfInterest:(id)a2 serviceState:(unsigned long long)a3 serviceSuspendReasons:(id)a4 isMapValid:(BOOL)a5 metaInfo:(id)a6 homeSlamModelData:(id)a7;
- (BOOL)_cosineSimilarity_isSameSpaceForLabel:(id)a0;
- (id)_extendProbabilityVectorForLabel:(id)a0 toMatchPredictionContext:(id)a1;
- (BOOL)_geo_isSameSpaceForLabel:(id)a0 horizontalThreshold:(double)a1 deviceClass:(id)a2;
- (BOOL)_geo_isSameYawLabel:(id)a0 yawThreshold:(double)a1;
- (BOOL)_image_isSameSpaceForLabel:(id)a0;
- (long long)averageRSSIOfSameSpaceLabelsForMapItem:(id)a0;
- (id)copyUpdatingDevicePredictionContext:(id)a0;
- (id)copyWithReplacementPredictionContext:(id)a0;
- (id)labelsInSameSpaceAndYawForMapItem:(id)a0;
- (id)labelsInSameSpaceForMapItem:(id)a0 forDeviceClass:(unsigned long long)a1;
- (id)labelsInSameSpaceForMapItem:(id)a0 forDeviceClass:(id)a1 horizontalThreshold:(float)a2 yawThreshold:(double)a3;
- (unsigned long long)numberOfLabelsInSameSpaceForMapItem:(id)a0;

@end
