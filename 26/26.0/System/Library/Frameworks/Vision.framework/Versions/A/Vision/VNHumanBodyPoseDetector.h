@interface VNHumanBodyPoseDetector : VNHumanPoseDetector

+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)configurationOptionKeysForDetectorKey;
+ (Class)recognizedPointsObservationClass;

- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (id)_vcpRequestRevisionForOptions:(id)a0;
- (BOOL)canBehaveAsDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (BOOL)shouldBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (id)vcpPoseRequestSetupOptionsForDetectorOptions:(id)a0 error:(id *)a1;

@end
