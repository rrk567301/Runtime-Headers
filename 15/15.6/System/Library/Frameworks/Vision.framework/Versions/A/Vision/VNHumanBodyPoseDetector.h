@interface VNHumanBodyPoseDetector : VNHumanPoseDetector

+ (id)configurationOptionKeysForDetectorKey;
+ (Class)recognizedPointsObservationClass;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;

- (id)_vcpRequestRevisionForOptions:(id)a0;
- (char)canBehaveAsDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (char)completeInitializationForSession:(id)a0 error:(id *)a1;
- (char)shouldBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (id)vcpPoseRequestSetupOptionsForDetectorOptions:(id)a0 error:(id *)a1;

@end
