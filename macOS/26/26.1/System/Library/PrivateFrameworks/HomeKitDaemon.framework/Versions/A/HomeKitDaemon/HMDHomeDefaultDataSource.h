@class HMDDeviceLockStateDataSource, HMDBulletinBoard, HMFNetManager, HMFWiFiManager, HMDHAPMetadata, HMDXPCMessageTransport;
@protocol HMDFeaturesDataSource, HMDIDSIDQueryController;

@interface HMDHomeDefaultDataSource : NSObject <HMDHomeDataSource>

@property (nonatomic, readonly) HMDHAPMetadata *hapMetadata;
@property (nonatomic, readonly) HMFWiFiManager *wifiManager;
@property (nonatomic, readonly) HMFNetManager *netManager;
@property (nonatomic, readonly) id<HMDFeaturesDataSource> featuresDataSource;
@property (nonatomic, readonly) HMDXPCMessageTransport *xpcMessageTransport;
@property (nonatomic, readonly) HMDDeviceLockStateDataSource *deviceLockStateDataSource;
@property (nonatomic, readonly) HMDBulletinBoard *bulletinBoard;
@property (nonatomic, readonly) id<HMDIDSIDQueryController> idsIDQueryController;

- (id)init;
- (id)makeAccessoryMatterCapabilitiesForFilename:(long long)a0;
- (id)makeCurrentUserWithUserPrivilege:(unsigned long long)a0 home:(id)a1;
- (id)makeHomeActivityStateManagerWithHome:(id)a0;
- (id)makeHomeLocationHandler;
- (id)makeHomeMetricsDispatcherWithIdentifier:(id)a0 logEventSubmitter:(id)a1;
- (id)makeHomePresenceMonitor;
- (id)makeHomeReprovisionHandler;
- (id)makeLockNotificationManagerWithHomeUUID:(id)a0 workQueue:(id)a1;
- (id)makeModernMessagingHandlerWithMappings:(id)a0;
- (id)makeNFCReaderKeyManagerWithHomeUUID:(id)a0 workQueue:(id)a1;
- (id)makeNaturalLightingCurveWriterWithHome:(id)a0;
- (id)makeNotificationRegistry;
- (id)makeReportingSessionManager;
- (id)makeResidentDeviceManagerWithHomeUUID:(id)a0;
- (id)makeSiriSecureAccessoryAccessControllerWithDataSource:(id)a0;
- (id)makeSwiftExtensionsWithHome:(id)a0;

@end
