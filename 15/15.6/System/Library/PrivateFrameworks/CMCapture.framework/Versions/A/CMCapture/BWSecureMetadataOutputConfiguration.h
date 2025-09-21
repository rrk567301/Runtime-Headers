@class NSSet, NSDictionary;

@interface BWSecureMetadataOutputConfiguration : NSObject <NSCopying>

@property (nonatomic) char objectDetectionEnabled;
@property (copy, nonatomic) NSSet *enabledDetectedObjectTypes;
@property (nonatomic) char attentionDetectionEnabled;
@property (nonatomic) char faceOcclusionDetectionEnabled;
@property (nonatomic) float objectDetectionTargetFrameRate;
@property (nonatomic) char faceTrackingEnabled;
@property (nonatomic) int faceTrackingMaxNumTrackedFaces;
@property (nonatomic) float faceTrackingNetworkFailureThresholdMultiplier;
@property (nonatomic) float faceTrackingFailureFieldOfViewModifier;
@property (nonatomic) char eyeReliefStatusDetectionEnabled;
@property (nonatomic) char motionToWakeEnabled;
@property (nonatomic) float motionToWakeTargetFrameRate;
@property (nonatomic) char faceIDReadinessEnabled;
@property (nonatomic) char faceIDReadinessPeriocularEnabled;
@property (nonatomic) char faceIDReadinessAttentionRequired;
@property (readonly, nonatomic) NSDictionary *metadataOutputConfigurationDictionary;
@property (readonly, nonatomic) char isEmpty;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;

@end
