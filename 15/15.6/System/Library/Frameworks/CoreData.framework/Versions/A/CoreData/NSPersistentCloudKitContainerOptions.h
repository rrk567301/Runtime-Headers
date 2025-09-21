@class CKContainerOptions, NSString, NSArray, CKContainer, NSNumber, NSObject;
@protocol NSCloudKitMirroringDelegateProgressProvider;

@interface NSPersistentCloudKitContainerOptions : NSObject

@property char useEncryptedStorage;
@property char useDeviceToDeviceEncryption;
@property (retain, nonatomic) NSString *apsConnectionMachServiceName;
@property (retain, nonatomic) NSNumber *operationMemoryThresholdBytes;
@property (nonatomic) char automaticallyDownloadFileBackedFutures;
@property (retain, nonatomic) NSNumber *ckAssetThresholdBytes;
@property (retain, nonatomic) CKContainerOptions *containerOptions;
@property (copy, nonatomic) NSArray *activityVouchers;
@property (weak, nonatomic) NSObject<NSCloudKitMirroringDelegateProgressProvider> *progressProvider;
@property (retain, nonatomic) CKContainer *testContainerOverride;
@property (readonly, copy) NSString *containerIdentifier;
@property (nonatomic) long long databaseScope;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;
- (id)initWithContainerIdentifier:(id)a0;

@end
