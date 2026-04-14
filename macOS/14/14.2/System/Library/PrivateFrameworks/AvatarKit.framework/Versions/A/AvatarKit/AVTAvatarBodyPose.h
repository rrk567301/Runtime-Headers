@class NSDictionary;

@interface AVTAvatarBodyPose : NSObject {
    NSDictionary *_dictionaryRepresentation;
}

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)neutralPose;
+ (id)posesInPosePack:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)_enumerateJointsForDictionaryRepresentation:(id)a0 usingBlock:(id /* block */)a1;
- (void)_enumerateJointsForVariantIntensity:(float)a0 dictionaryRepresentationA:(id)a1 dictionaryRepresentationB:(id)a2 usingBlock:(id /* block */)a3;
- (void)_enumerateJointsForVariantIntensityX:(float)a0 variantIntensityY:(float)a1 dictionaryRepresentationA:(id)a2 dictionaryRepresentationB:(id)a3 dictionaryRepresentationC:(id)a4 dictionaryRepresentationD:(id)a5 usingBlock:(id /* block */)a6;
- (void)enumerateJointsForAgeBodyPoseVariantIntensity:(float)a0 shoulderWidthBodyPoseVariantIntensity:(float)a1 usingBlock:(id /* block */)a2;
- (id)initWithHierarchy:(id)a0;
- (id)initWithRootJoints:(id)a0;
- (id)initWithSceneAtURL:(id)a0;

@end
