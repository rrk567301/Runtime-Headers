@class NSSet, HMDBulletinBoardNotification, NSData, NSNumber;

@interface HMDCameraProfileSettingsModel : HMBModel

@property (copy) NSNumber *versionField;
@property (copy) NSNumber *accessModeAtHomeField;
@property (copy) NSNumber *accessModeNotAtHomeField;
@property (copy) NSNumber *recordingEventTriggersField;
@property (copy) NSNumber *accessModeChangeNotificationEnabledField;
@property (copy) NSNumber *reachabilityEventNotificationEnabledField;
@property (copy) NSData *smartBulletinBoardNotificationDataField;
@property (copy) NSData *activityZonesField;
@property (copy) NSNumber *activityZonesIncludedForSignificantEventDetectionField;
@property unsigned long long currentAccessMode;
@property (readonly) char hasAnyNotificationFieldsSet;
@property (readonly) unsigned long long mostPrivateAccessMode;
@property long long version;
@property unsigned long long accessModeAtHome;
@property unsigned long long accessModeNotAtHome;
@property unsigned long long recordingEventTriggers;
@property char cameraManuallyDisabled;
@property (retain) NSSet *activityZones;
@property char activityZonesIncludedForSignificantEventDetection;
@property (readonly) char accessModeChangeNotificationEnabled;
@property (readonly) HMDBulletinBoardNotification *smartBulletinBoardNotification;
@property (readonly) char reachabilityEventNotificationEnabled;

+ (id)hmbProperties;

@end
