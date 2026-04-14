@class NSObject, NSArray, NSString, MediaIOGraphNodeDescription, AVCaptureDevice_Tundra;
@protocol OS_xpc_object;

@interface AVCaptureDeviceInputInternal_Tundra : NSObject {
    AVCaptureDevice_Tundra *device;
    NSArray *ports;
    MediaIOGraphNodeDescription *deviceInputUnitDescription;
    MediaIOGraphNodeDescription *demuxUnitDescription;
    BOOL ready;
    BOOL centerStageAllowed;
    BOOL backgroundBlurAllowed;
    BOOL studioLightingAllowed;
    BOOL reactionEffectsAllowed;
    BOOL backgroundReplacementAllowed;
    BOOL observingSuppressVideoEffects;
    NSObject<OS_xpc_object> *sensitiveContentAnalyzerXPCObject;
    BOOL sensitiveContentAnalyzerEnabled;
    NSString *blackenFramesKey;
}

@end
