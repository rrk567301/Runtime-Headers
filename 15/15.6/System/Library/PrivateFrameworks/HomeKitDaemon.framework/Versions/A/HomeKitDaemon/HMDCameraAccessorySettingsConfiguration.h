@interface HMDCameraAccessorySettingsConfiguration : HMFObject

@property (readonly) char isRecordingCapable;
@property (readonly) char isRecordingEnabled;
@property (readonly) unsigned long long recordingEventTriggers;
@property (readonly) unsigned long long numActivityZones;
@property (readonly) char inclusionZone;
@property (readonly) char smartBulletinBoardNotificationEnabled;
@property (readonly) char reachabilityNotificationEnabled;

- (id)initWithCameraAccessory:(id)a0;

@end
