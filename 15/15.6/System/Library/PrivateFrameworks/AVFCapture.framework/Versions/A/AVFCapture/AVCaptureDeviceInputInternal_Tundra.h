@class NSArray, NSString, MediaIOGraphNodeDescription, AVCaptureDevice_Tundra;

@interface AVCaptureDeviceInputInternal_Tundra : NSObject {
    AVCaptureDevice_Tundra *device;
    NSArray *ports;
    MediaIOGraphNodeDescription *deviceInputUnitDescription;
    MediaIOGraphNodeDescription *demuxUnitDescription;
    char ready;
    char centerStageAllowed;
    char backgroundBlurAllowed;
    char studioLightingAllowed;
    char reactionEffectsAllowed;
    char backgroundReplacementAllowed;
    char observingSuppressVideoEffects;
    NSString *blackenFramesKey;
}

@end
