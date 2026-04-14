@class NSNotificationCenter, HMDHAPAccessory, HMDCameraProfileSettingsManager, NSDictionary, HMDCameraRecordingManager, HMDCameraClipUserNotificationCenter, NSMutableArray, HMDService, HMDCameraRecordingReachabilityEventManager, NSString, NSSet, HMDCameraStreamSnapshotHandler, HMDPredicateUtilities, _HMCameraUserSettings, HMDCameraSnapshotManager, HMFNetMonitor, HMDCameraClipManager, HMDCameraSignificantEventListener, HMFTimer, HMDCameraSignificantEventNotificationFilter;
@protocol HMDCameraBulletinBoard;

@interface HMDCameraProfile : HMDAccessoryProfile <HMDCameraSettingProactiveReaderDelegate, HMDCameraProfileSettingsManagerDelegate, HMDCameraSignificantEventListenerDelegate, HMFNetMonitorDelegate, HMFTimerDelegate, HMDCameraSignificantEventNotificationObserver, HMDCameraClipManagerDelegate>

@property (class, retain) id<HMDCameraBulletinBoard> bulletinBoard;

@property (readonly, copy) NSString *urlString;
@property (readonly, copy) NSDictionary *assistantObject;
@property (readonly) NSSet *cameraStreamManagers;
@property (readonly) HMDCameraSnapshotManager *snapshotManager;
@property (readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) NSMutableArray *settingProactiveReaders;
@property (readonly) HMFNetMonitor *networkMonitor;
@property (readonly) HMDCameraProfileSettingsManager *cameraSettingsManager;
@property (readonly) HMDCameraRecordingReachabilityEventManager *reachabilityEventManager;
@property (readonly) HMDCameraClipUserNotificationCenter *clipUserNotificationCenter;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain) HMFTimer *recordingEventsCleanupTimer;
@property (readonly, nonatomic) HMDCameraSignificantEventNotificationFilter *significantEventNotificationFilter;
@property (retain) HMDPredicateUtilities *predicateUtilities;
@property (retain) HMDCameraRecordingManager *cameraRecordingManager;
@property (copy) id /* block */ recordingEventsCleanupTimerFactory;
@property (copy) id /* block */ recordingManagerFactory;
@property (readonly, nonatomic, getter=isMicrophonePresent) BOOL microphonePresent;
@property (readonly, nonatomic, getter=isSpeakerPresent) BOOL speakerPresent;
@property (readonly) _HMCameraUserSettings *currentSettings;
@property (readonly) HMDCameraClipManager *clipManager;
@property (readonly) HMDService *recordingManagementService;
@property (retain) HMDCameraSignificantEventListener *significantEventListener;
@property (readonly, weak) HMDHAPAccessory *hapAccessory;
@property (readonly, nonatomic, getter=isCameraRecordingFeatureSupported) BOOL supportsCameraRecordingFeature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (BOOL)hasMessageReceiverChildren;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setUp;
- (void)timerDidFire:(id)a0;
- (void)networkMonitorIsReachable:(id)a0;
- (void)networkMonitorIsUnreachable:(id)a0;
- (id)dumpState;
- (void)unconfigure;
- (void)registerForMessages;
- (id)messageReceiverChildren;
- (void)clipManagerDidStart:(id)a0;
- (void)clipManagerDidStartUpCloudZone:(id)a0;
- (void)clipManagerDidStop:(id)a0;
- (void)clipManager:(id)a0 didUpdateSignificantEvent:(id)a1;
- (void)clipManager:(id)a0 didDeleteClipWithUUID:(id)a1;
- (void)clipManagerDidDisableCloudStorage:(id)a0;
- (void)notificationManager:(id)a0 didReceiveNotificationForCameraSignificantEventIdentifier:(id)a1 notificationReasons:(unsigned long long)a2;
- (void)removeCloudData;
- (void)cameraSettingProactiveReaderDidCompleteRead:(id)a0;
- (void)_handleNegotiateStreamRequest:(id)a0;
- (void)_handleStreamControlRequest:(id)a0;
- (void)handleCameraProfileSettingsDidChangeNotification:(id)a0;
- (void)handleResidentsChangedNotification:(id)a0;
- (void)cameraProfileSettingsManager:(id)a0 canEnableRecordingWithCompletion:(id /* block */)a1;
- (void)cameraProfileSettingsManager:(id)a0 canDisableRecordingWithCompletion:(id /* block */)a1;
- (void)listener:(id)a0 didReceiveSignificantEvent:(id)a1 heroFrameData:(id)a2;
- (id)initWithAccessory:(id)a0 services:(id)a1 msgDispatcher:(id)a2 settingsManager:(id)a3 workQueue:(id)a4;
- (id)initWithAccessory:(id)a0 services:(id)a1 recordingManagementService:(id)a2 msgDispatcher:(id)a3 settingsManager:(id)a4 workQueue:(id)a5 uniqueIdentifier:(id)a6 clipManager:(id)a7 clipUserNotificationCenter:(id)a8 reachabilityEventManager:(id)a9 networkMonitor:(id)a10 streamSnapshotHandler:(id)a11 snapshotManager:(id)a12 cameraStreamManagers:(id)a13 significantEventNotificationFilter:(id)a14 notificationCenter:(id)a15;
- (void)tearDownWithReplacementCameraProfile:(id)a0;
- (void)_createCameraRecordingManager;
- (void)_createSignificantEventListener;
- (void)_setUpBulletinNotificationManagerObserver;
- (void)_setControlSupport;
- (BOOL)_areFaceClassificationsSuppressedForSignificantEvent:(id)a0;
- (BOOL)_shouldNotifyForSignificantEvent:(id)a0;
- (void)_postNotificationForUpdatedSignificantEvent:(id)a0;

@end
