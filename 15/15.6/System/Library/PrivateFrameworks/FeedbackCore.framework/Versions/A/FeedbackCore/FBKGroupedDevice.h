@class NSString, NSMutableDictionary;

@interface FBKGroupedDevice : NSObject <DEDDeviceLike, DEDDeviceFBKSupport, FBKDiffableObject>

@property (nonatomic, readonly) long long hash;
@property (retain) NSMutableDictionary *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)FBKKnownDevices;
+ (id)currentDevicePlatform;
+ (id)currentGroupedDevice;
+ (id)deviceDefaults;
+ (id)inspectFBKPairing;
+ (id)sortedDevices:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)identifier;
- (id)displayName;
- (id)platform;
- (id)imageData;
- (char)isReady;
- (id)color;
- (id)build;
- (id)displayType;
- (id)serialize;
- (id)deviceClass;
- (id)productType;
- (char)isEqualToDevice:(id)a0;
- (id)publicLogDescription;
- (void)addDevice:(id)a0;
- (char)isCurrentDevice;
- (id)initWithDevices:(id)a0;
- (char)needsPairing;
- (void)fetchIconImageDataForScale:(float)a0 completionCompletion:(id /* block */)a1;
- (char)hasCapabilities:(id)a0;
- (id)hashingKey;
- (char)isVisibleToDED;
- (void)_postDeviceChangeNotification;
- (void)_updateWithDevices:(id)a0;
- (id)anyDEDDevice;
- (id)bestStringForKey:(id)a0;
- (id)debugDetails;
- (id)dedIDSDevice;
- (id)dedSharingDevice;
- (id)deviceDataForSubmissionWithSession:(id)a0;
- (id)deviceDefaults;
- (void)deviceListChanged:(id)a0;
- (id)diffableHashWithContext:(id)a0;
- (id)inferredPlatform;
- (char)isFBKPaired;
- (char)isLikeDEDDevice:(id)a0;
- (id)mostReliableDevice;
- (void)pairToFBK;
- (id)readyDevice;
- (void)removeFBKPairing;
- (id)transportsForDisplay;
- (void)updateStoredCopyIfNeeded;

@end
