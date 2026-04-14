@class NSObject;
@protocol OS_channel_rt;

@interface ARStreamingGazeTrackingDaemonService : ARDaemonService <ARNetworkingGazeObserver> {
    struct ARRTWriter { NSObject<OS_channel_rt> *channel; NSObject<OS_channel_rt> *dispatch_channel; _Atomic BOOL authorized; _Atomic BOOL data_access_allowed; unsigned long long msg_size; unsigned int msg_type; } _writer;
    int _frameId;
    struct ARGazeData { struct AREyeData { double timestamp; float eyeballCenter[3]; float eyeballCenterOffset[3]; unsigned int eyePositionStatus; unsigned int eyePositionStatusX; unsigned int eyePositionStatusY; unsigned int eyePositionStatusZ; float gazeDirection[3]; float gazeOrigin[3]; float gazePerceivedDirection[3]; float gazePerceivedOrigin[3]; float gazeSmarterPerceivedDirection[3]; float gazeSmarterPerceivedOrigin[3]; float pupilCenter[3]; float entrancePupilCenter[3]; float pupilDiameter; float gazeValidity; float gazeUncertainty; float eyeOpenness; float eyeRelief; float totalEyeRelief; float corneaToLensDistance; BOOL hasContactLensDrifted; unsigned int eyeType; unsigned int gazeTrackingState; unsigned int gazeTrackingStateReason; BOOL isEnrolled; struct ARGazeEyePositionFilteredEyeData { float eyeballCenterOffset[3]; float eyeballCenter[3]; float eyeRelief; float totalEyeRelief; BOOL isFilteredEyeValid; } filteredEye; unsigned int pupilSizeCategory; } eye[2]; unsigned int preferredCamera; unsigned int usedCamera; float binocularGazeDirection[3]; float binocularGazeOrigin[3]; float binocularGazePerceivedDirection[3]; float binocularGazePerceivedOrigin[3]; float binocularGazeValidity; float binocularGazeUncertainty; unsigned int binocularGazeTrackingState; float worldFromDevice[4][4]; unsigned int accessibilityMode; double updateTimestamp; unsigned long long frameId; BOOL isDeviceOnHead; BOOL isEnrolled; unsigned int assertionEyeModelType; unsigned int assertionEyeModelTypeInSession; BOOL isClipOnDetected; struct ARAdaptiveRegistrationInfoData { float deviceToCompositorHomographySource[2][16]; float deviceToEye[2][16]; float eyeClampOrigin[2][3]; float eyeClampNormal[2][3]; float homographyMitigationNearToFarModeFactor; BOOL homographyMitigationWasApplied; } adaptiveRegistrationInfo; float filteredIOD; float isFilteredIODValid; unsigned int motionState; } _gazeData;
    BOOL _hasEyeTrackingEntitlement;
}

+ (id)serviceName;
+ (id)networkingServiceName;
+ (Class)remoteServiceClass;

- (id)initWithConnection:(id)a0;
- (void)_commonInit;
- (void).cxx_destruct;
- (void)setupCompleteForRTChannel;
- (unsigned long long)channelDataSize;
- (void)configureWithNetworkingService:(id)a0;
- (void)didUpdateIsAuthorized:(BOOL)a0;
- (unsigned long long)dispatchChannelDataSize;
- (id)initWithRemoteService:(id)a0;
- (void)onReceiveGaze:(struct ARNetworkingGazeDataV1 { struct ARNetworkingEyeDataV1 { double x0; float x1; float x2; } x0; struct ARNetworkingEyeDataV1 { double x0; float x1; float x2; } x1; float x2; float x3; struct { void /* unknown type, empty encoding */ x0[4]; } x4; double x5; BOOL x6; unsigned short x7; } *)a0;
- (BOOL)requiresChannelSetup;
- (BOOL)requiresDispatchChannelSetup;
- (void)setupCompleteForRTDispatchChannel;

@end
