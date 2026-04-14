@class _HMCameraSnapshotControl, NSArray, HMCameraProfile, _HMCameraAudioControl, HMCameraRecordingReachabilityEventManager, HMCameraRecordingEventManager, HMCameraClipManager, HMCameraUserSettings, _HMCameraStreamControl, _HMCameraSettingsControl, HMCameraIndexingManager;

@interface _HMCameraProfile : _HMAccessoryProfile

@property (readonly, copy) NSArray *controls;
@property (retain) HMCameraUserSettings *userSettings;
@property (retain) HMCameraRecordingEventManager *recordingEventManager;
@property (retain) HMCameraClipManager *clipManager;
@property (retain) HMCameraIndexingManager *indexingManager;
@property (retain) HMCameraRecordingReachabilityEventManager *reachabilityEventManager;
@property (weak) HMCameraProfile *accessoryProfile;
@property (readonly) _HMCameraStreamControl *streamControl;
@property (readonly) _HMCameraSnapshotControl *snapshotControl;
@property (readonly) _HMCameraSettingsControl *settingsControl;
@property (readonly) _HMCameraAudioControl *speakerControl;
@property (readonly) _HMCameraAudioControl *microphoneControl;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)__configureWithContext:(id)a0 accessory:(id)a1;
- (void)addUserSettings:(id)a0;
- (id)initWithUUID:(id)a0 services:(id)a1 mostRecentSnapshot:(id)a2 userSettings:(id)a3;

@end
