@class NSString, NSArray, NSObject;
@protocol ARGazeTrackingDaemonServiceProtocol, OS_channel_rt;

@interface ARGazeTrackingRemoteService : ARRemoteService <ARGazeTrackingRemoteServiceProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _gazeLock;
    struct ARGazeData { struct AREyeData { double timestamp; float eyeballCenter[3]; float eyeballCenterOffset[3]; unsigned int eyePositionStatus; unsigned int eyePositionStatusX; unsigned int eyePositionStatusY; unsigned int eyePositionStatusZ; float gazeDirection[3]; float gazeOrigin[3]; float gazePerceivedDirection[3]; float gazePerceivedOrigin[3]; float gazeSmarterPerceivedDirection[3]; float gazeSmarterPerceivedOrigin[3]; float pupilCenter[3]; float entrancePupilCenter[3]; float pupilDiameter; float gazeValidity; float gazeUncertainty; float eyeOpenness; float eyeRelief; float totalEyeRelief; float corneaToLensDistance; BOOL hasContactLensDrifted; unsigned int eyeType; unsigned int gazeTrackingState; unsigned int gazeTrackingStateReason; BOOL isEnrolled; struct ARGazeEyePositionFilteredEyeData { float eyeballCenterOffset[3]; float eyeballCenter[3]; float eyeRelief; float totalEyeRelief; BOOL isFilteredEyeValid; } filteredEye; unsigned int pupilSizeCategory; } eye[2]; unsigned int preferredCamera; unsigned int usedCamera; float binocularGazeDirection[3]; float binocularGazeOrigin[3]; float binocularGazePerceivedDirection[3]; float binocularGazePerceivedOrigin[3]; float binocularGazeValidity; float binocularGazeUncertainty; unsigned int binocularGazeTrackingState; float worldFromDevice[4][4]; unsigned int accessibilityMode; double updateTimestamp; unsigned long long frameId; BOOL isDeviceOnHead; BOOL isEnrolled; unsigned int assertionEyeModelType; unsigned int assertionEyeModelTypeInSession; BOOL isClipOnDetected; struct ARAdaptiveRegistrationInfoData { float deviceToCompositorHomographySource[2][16]; float deviceToEye[2][16]; float eyeClampOrigin[2][3]; float eyeClampNormal[2][3]; float homographyMitigationNearToFarModeFactor; BOOL homographyMitigationWasApplied; } adaptiveRegistrationInfo; float filteredIOD; float isFilteredIODValid; unsigned int motionState; } _gazeData;
    BOOL _hasGazeData;
    BOOL _gazePresent;
    BOOL _isDeviceOnHead;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _onHeadStatusLock;
    NSArray *_eyeAnchorUUIDMap;
    BOOL _enableXPCDataUpdates;
    struct ARRTReader { NSObject<OS_channel_rt> *channel; void *latest_data; unsigned int msg_type; unsigned long long msg_size; } _reader;
}

@property (readonly, nonatomic) id<ARGazeTrackingDaemonServiceProtocol> service;
@property (copy) id /* block */ trackingCallback;
@property (copy) id /* block */ statusDidChangeCallback;
@property (copy, nonatomic) id /* block */ deviceOnHeadStatusChangeCallback;
@property (nonatomic) BOOL enableXPCDataUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;
+ (id)daemonServiceInterface;
+ (id)remoteServiceInterface;

- (void)dealloc;
- (void)_commonInit;
- (id)init;
- (BOOL)performMigration;
- (void).cxx_destruct;
- (void)updateOnHeadStatusWithGazeData:(struct ARGazeData { struct AREyeData { double x0; float x1[3]; float x2[3]; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7[3]; float x8[3]; float x9[3]; float x10[3]; float x11[3]; float x12[3]; float x13[3]; float x14[3]; float x15; float x16; float x17; float x18; float x19; float x20; float x21; BOOL x22; unsigned int x23; unsigned int x24; unsigned int x25; BOOL x26; struct ARGazeEyePositionFilteredEyeData { float x0[3]; float x1[3]; float x2; float x3; BOOL x4; } x27; unsigned int x28; } x0[2]; unsigned int x1; unsigned int x2; float x3[3]; float x4[3]; float x5[3]; float x6[3]; float x7; float x8; unsigned int x9; float x10[4][4]; unsigned int x11; double x12; unsigned long long x13; BOOL x14; BOOL x15; unsigned int x16; unsigned int x17; BOOL x18; struct ARAdaptiveRegistrationInfoData { float x0[2][16]; float x1[2][16]; float x2[2][3]; float x3[2][3]; float x4; BOOL x5; } x19; float x20; float x21; unsigned int x22; })a0;
- (void)asyncServiceWithCallback:(id /* block */)a0;
- (BOOL)clearGazeData;
- (void)didUpdateGazeData:(struct ARGazeData { struct AREyeData { double x0; float x1[3]; float x2[3]; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7[3]; float x8[3]; float x9[3]; float x10[3]; float x11[3]; float x12[3]; float x13[3]; float x14[3]; float x15; float x16; float x17; float x18; float x19; float x20; float x21; BOOL x22; unsigned int x23; unsigned int x24; unsigned int x25; BOOL x26; struct ARGazeEyePositionFilteredEyeData { float x0[3]; float x1[3]; float x2; float x3; BOOL x4; } x27; unsigned int x28; } x0[2]; unsigned int x1; unsigned int x2; float x3[3]; float x4[3]; float x5[3]; float x6[3]; float x7; float x8; unsigned int x9; float x10[4][4]; unsigned int x11; double x12; unsigned long long x13; BOOL x14; BOOL x15; unsigned int x16; unsigned int x17; BOOL x18; struct ARAdaptiveRegistrationInfoData { float x0[2][16]; float x1[2][16]; float x2[2][3]; float x3[2][3]; float x4; BOOL x5; } x19; float x20; float x21; unsigned int x22; })a0;
- (void)enableDynamicSwitching:(BOOL)a0 completion:(id /* block */)a1;
- (void)getAccessibilityMode:(id /* block */)a0;
- (void)getClipOnConfiguration:(id /* block */)a0;
- (void)getClipOnPoseAsync:(id /* block */)a0;
- (id)getClipOnPoseResult;
- (void)getConfigurationWithCompletionHandler:(id /* block */)a0;
- (void)getEyeboxExtentForEye:(unsigned int)a0 completion:(id /* block */)a1;
- (BOOL)getLatestGaze:(struct ARGazeData { struct AREyeData { double x0; float x1[3]; float x2[3]; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7[3]; float x8[3]; float x9[3]; float x10[3]; float x11[3]; float x12[3]; float x13[3]; float x14[3]; float x15; float x16; float x17; float x18; float x19; float x20; float x21; BOOL x22; unsigned int x23; unsigned int x24; unsigned int x25; BOOL x26; struct ARGazeEyePositionFilteredEyeData { float x0[3]; float x1[3]; float x2; float x3; BOOL x4; } x27; unsigned int x28; } x0[2]; unsigned int x1; unsigned int x2; float x3[3]; float x4[3]; float x5[3]; float x6[3]; float x7; float x8; unsigned int x9; float x10[4][4]; unsigned int x11; double x12; unsigned long long x13; BOOL x14; BOOL x15; unsigned int x16; unsigned int x17; BOOL x18; struct ARAdaptiveRegistrationInfoData { float x0[2][16]; float x1[2][16]; float x2[2][3]; float x3[2][3]; float x4; BOOL x5; } x19; float x20; float x21; unsigned int x22; } *)a0;
- (void)getLatestGazeEnrollmentResultWithCompletionHandler:(id /* block */)a0;
- (void)getTrackingSessionStatusWithCompletionHandler:(id /* block */)a0;
- (void)handleDispatchChannelMessage:(void *)a0 size:(unsigned long long)a1 type:(unsigned int)a2;
- (void)onSystemHasPoweredOn;
- (void)resetTrackingSessionHistory;
- (void)serviceDidReconnect:(BOOL)a0;
- (void)setAccessibilityMode:(unsigned int)a0;
- (void)setGazeOverrideData:(struct ARGazeData { struct AREyeData { double x0; float x1[3]; float x2[3]; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7[3]; float x8[3]; float x9[3]; float x10[3]; float x11[3]; float x12[3]; float x13[3]; float x14[3]; float x15; float x16; float x17; float x18; float x19; float x20; float x21; BOOL x22; unsigned int x23; unsigned int x24; unsigned int x25; BOOL x26; struct ARGazeEyePositionFilteredEyeData { float x0[3]; float x1[3]; float x2; float x3; BOOL x4; } x27; unsigned int x28; } x0[2]; unsigned int x1; unsigned int x2; float x3[3]; float x4[3]; float x5[3]; float x6[3]; float x7; float x8; unsigned int x9; float x10[4][4]; unsigned int x11; double x12; unsigned long long x13; BOOL x14; BOOL x15; unsigned int x16; unsigned int x17; BOOL x18; struct ARAdaptiveRegistrationInfoData { float x0[2][16]; float x1[2][16]; float x2[2][3]; float x3[2][3]; float x4; BOOL x5; } x19; float x20; float x21; unsigned int x22; })a0;
- (void)setGazeOverrideEnabled:(BOOL)a0;
- (void)setupCompleteForRTChannel;
- (id)uuidForEyeLocation:(long long)a0;

@end
