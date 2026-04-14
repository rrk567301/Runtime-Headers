@class NSString, CKContainer, NSObject;
@protocol NSCloudKitMirroringDelegateProgressProvider;

@interface NSPersistentCloudKitContainerOptions : NSObject

@property BOOL useEncryptedStorage;
@property BOOL useDeviceToDeviceEncryption;
@property (retain, nonatomic) NSString *apsConnectionMachServiceName;
@property (weak, nonatomic) NSObject<NSCloudKitMirroringDelegateProgressProvider> *progressProvider;
@property (retain, nonatomic) CKContainer *testContainerOverride;
@property (readonly, copy) NSString *containerIdentifier;
@property (nonatomic) long long databaseScope;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;
- (id)initWithContainerIdentifier:(id)a0;

@end
