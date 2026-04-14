@class NSString, NSOperationQueue, VSRemoteNotifier;
@protocol VSDeviceDelegate;

@interface VSDevice : NSObject <VSRemoteNotifierDelegate>

@property (retain, nonatomic) NSString *productVersionString;
@property (nonatomic) void /* function */ *copyAnswer;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSRemoteNotifier *setTopBoxStateRemoteNotifier;
@property (weak, nonatomic) id<VSDeviceDelegate> delegate;
@property (readonly, nonatomic, getter=isRunningAnInternalBuild) BOOL runningAnInternalBuild;
@property (readonly, nonatomic, getter=isRunningACustomerBuild) BOOL runningACustomerBuild;
@property (readonly, nonatomic) unsigned long long deviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentDevice;
+ (BOOL)_getMobileGestaltBoolean:(struct __CFString { } *)a0 withCopyAnswer:(void /* function */ *)a1;
+ (BOOL)_runningAnInternalBuildWithCopyAnswer:(void /* function */ *)a0;
+ (BOOL)_runningACustomerBuildWithCopyAnswer:(void /* function */ *)a0;
+ (unsigned long long)_deviceTypeWithCopyAnswer:(void /* function */ *)a0;
+ (id)_productVersionWithCopyAnswer:(void /* function */ *)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)productVersion;
- (id)stringForAMSPlatform;
- (void)fetchDeviceManagedSetTopBoxProfileWithCompletion:(id /* block */)a0;
- (BOOL)setIgnoreSetTopBoxProfile:(BOOL)a0;
- (void)fetchSetTopBoxProfileWithCompletion:(id /* block */)a0;
- (id)stringForAMSDeviceFamilies;
- (id)developerIdentityProviderDeletionConfirmationMessage;
- (id)accountDeletionConfirmationMessageForIdentityProviderDisplayName:(id)a0;
- (void)refreshSetTopBoxProfile:(id /* block */)a0;
- (id)developerSettingsFetchOperation;
- (void)cloudConfigurationDidChange;
- (id)stringForAMSPlatformAttributes;

@end
