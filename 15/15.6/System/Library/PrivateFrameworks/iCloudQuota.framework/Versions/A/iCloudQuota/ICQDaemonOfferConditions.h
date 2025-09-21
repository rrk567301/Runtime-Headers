@class NSNumber;

@interface ICQDaemonOfferConditions : NSObject <NSCopying>

@property (class, readonly, nonatomic) char isDeviceStorageAlmostFull;
@property (class, readonly, nonatomic) char isPhotosCloudEnabled;
@property (class, readonly, nonatomic) char hasPhotosCloudEverBeenEnabled;
@property (class, readonly, nonatomic) char isPhotosOptimizeEnabled;
@property (class, readonly, nonatomic) NSNumber *photosLibrarySize;
@property (class, readonly, nonatomic) NSNumber *photosLibraryUploadSize;
@property (class, readonly, nonatomic) NSNumber *photosVideosCount;
@property (class, nonatomic, getter=isSimulatedDeviceStorageAlmostFull) char simulatedDeviceStorageAlmostFull;
@property (class, readonly, nonatomic) char isDeviceStorageNearLowButNotLow;
@property (class, readonly, nonatomic) char isCachedCloudQuotaAlmostFullOrFull;

@property (nonatomic, getter=isDeviceStorageAlmostFull) char deviceStorageAlmostFull;
@property (nonatomic, getter=isPhotosCloudEnabled) char photosCloudEnabled;
@property (nonatomic, getter=isPhotosOptimizeEnabled) char photosOptimizeEnabled;
@property (copy, nonatomic) NSNumber *photosLibrarySize;
@property (nonatomic, getter=isBackupRestoreComplete) char backupRestoreComplete;

+ (id)currentConditions;
+ (char)backupRestoreComplete;
+ (void)getPhotosLibraryUploadSizeWithCompletion:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCurrentConditions;

@end
