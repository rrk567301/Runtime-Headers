@class NSString, NSMutableDictionary;

@interface FBKGroupedDevice : NSObject <DEDDeviceLike, DEDDeviceFBKSupport, FBKDiffableObject>

@property (nonatomic, readonly) long long hash;
@property (retain) NSMutableDictionary *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)FBKKnownDevices;
+ (id)currentGroupedDevice;
+ (id)currentDevicePlatform;
+ (id)deviceDefaults;
+ (id)inspectFBKPairing;
+ (id)sortedDevices:(id)a0;

- (void)dealloc;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)identifier;
- (id)platform;
- (id)displayName;
- (id)imageData;
- (BOOL)isReady;
- (id)color;
- (id)serialize;
- (id)displayType;
- (id)build;
- (id)productType;
- (id)deviceClass;
- (id)shortDescription;
- (BOOL)isEqualToDevice:(id)a0;
- (id)publicLogDescription;
- (void)addDevice:(id)a0;
- (BOOL)isCurrentDevice;
- (BOOL)needsPairing;
- (id)hashingKey;
- (BOOL)hasCapabilities:(id)a0;
- (void)fetchIconImageDataForScale:(float)a0 completionCompletion:(id /* block */)a1;
- (id)initWithDevices:(id)a0;
- (void)deviceListChanged:(id)a0;
- (id)deviceDefaults;
- (BOOL)isLikeDEDDevice:(id)a0;
- (void)pairToFBK;
- (BOOL)isFBKPaired;
- (void)updateStoredCopyIfNeeded;
- (void)removeFBKPairing;
- (BOOL)isVisibleToDED;
- (id)diffableHashWithContext:(id)a0;
- (id)transportsForDisplay;
- (id)dedIDSDevice;
- (id)dedSharingDevice;
- (id)anyDEDDevice;
- (id)mostReliableDevice;
- (id)inferredPlatform;
- (id)deviceDataForSubmissionWithSession:(id)a0;
- (id)debugDetails;
- (void)_updateWithDevices:(id)a0;
- (id)bestStringForKey:(id)a0;
- (id)readyDevice;
- (void)_postDeviceChangeNotification;

@end
