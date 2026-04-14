@class NSString, NSMutableDictionary;

@interface FBKGroupedDevice : NSObject <DEDDeviceLike, DEDDeviceFBKSupport, FBKDiffableObject>

@property (nonatomic, readonly) long long hash;
@property (retain) NSMutableDictionary *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)FBKKnownDevices;
+ (id)deviceDefaults;
+ (id)inspectFBKPairing;
+ (id)currentGroupedDevice;
+ (id)currentDevicePlatform;
+ (id)sortedDevices:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)identifier;
- (id)platform;
- (id)displayName;
- (id)imageData;
- (BOOL)isReady;
- (id)color;
- (id)serialize;
- (BOOL)isEqualToDevice:(id)a0;
- (id)displayType;
- (id)build;
- (id)productType;
- (id)deviceClass;
- (id)shortDescription;
- (id)publicLogDescription;
- (void)addDevice:(id)a0;
- (BOOL)isCurrentDevice;
- (BOOL)needsPairing;
- (id)hashingKey;
- (BOOL)hasCapabilities:(id)a0;
- (void)fetchIconImageDataForScale:(float)a0 completionCompletion:(id /* block */)a1;
- (void)_updateWithDevices:(id)a0;
- (void)deviceListChanged:(id)a0;
- (id)anyDEDDevice;
- (id)dedIDSDevice;
- (id)dedSharingDevice;
- (id)initWithDevices:(id)a0;
- (id)mostReliableDevice;
- (BOOL)isVisibleToDED;
- (id)bestStringForKey:(id)a0;
- (id)readyDevice;
- (id)deviceDefaults;
- (BOOL)isFBKPaired;
- (void)pairToFBK;
- (void)_postDeviceChangeNotification;
- (void)updateStoredCopyIfNeeded;
- (void)removeFBKPairing;
- (BOOL)isLikeDEDDevice:(id)a0;
- (id)diffableHashWithContext:(id)a0;
- (id)transportsForDisplay;
- (id)inferredPlatform;
- (id)deviceDataForSubmissionWithSession:(id)a0;
- (id)debugDetails;

@end
