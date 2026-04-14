@class NSString, NSMutableDictionary;

@interface FBKGroupedDevice : NSObject <DEDDeviceLike, DEDDeviceFBKSupport, FBKDiffableObject>

@property (nonatomic, readonly) long long hash;
@property (retain) NSMutableDictionary *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentDevicePlatform;
+ (id)FBKKnownDevices;
+ (id)currentGroupedDevice;
+ (id)deviceDefaults;
+ (id)inspectFBKPairing;
+ (id)sortedDevices:(id)a0;

- (id)productType;
- (id)deviceClass;
- (BOOL)isCurrentDevice;
- (BOOL)isReady;
- (void)addDevice:(id)a0;
- (id)displayName;
- (id)build;
- (id)identifier;
- (id)publicLogDescription;
- (void)fetchIconImageDataForScale:(float)a0 completionCompletion:(id /* block */)a1;
- (id)platform;
- (id)serialize;
- (id)imageData;
- (id)displayType;
- (id)color;
- (id)name;
- (id)hashingKey;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasCapabilities:(id)a0;
- (BOOL)isEqualToDevice:(id)a0;
- (id)initWithDevices:(id)a0;
- (BOOL)needsPairing;
- (BOOL)isVisibleToDED;
- (void)_postDeviceChangeNotification;
- (void)_updateWithDevices:(id)a0;
- (id)anyDEDDevice;
- (id)bestStringForKey:(id)a0;
- (id)debugDetails;
- (id)dedIDSDevice;
- (id)dedSharingDevice;
- (id)deviceDataForSubmissionWithSession:(id)a0 filerFormID:(long long)a1;
- (id)deviceDefaults;
- (void)deviceListChanged:(id)a0;
- (id)diffableHashWithContext:(id)a0;
- (id)inferredPlatform;
- (BOOL)isFBKPaired;
- (BOOL)isLikeDEDDevice:(id)a0;
- (id)mostReliableDevice;
- (void)pairToFBK;
- (id)readyDevice;
- (void)removeFBKPairing;
- (id)transportsForDisplay;
- (void)updateStoredCopyIfNeeded;

@end
