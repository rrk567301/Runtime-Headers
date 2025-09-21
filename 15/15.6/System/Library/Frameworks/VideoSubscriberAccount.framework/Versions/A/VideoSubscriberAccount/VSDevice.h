@class VSManagedProfileConnection, NSString, VSRemoteNotifier, NSMutableSet, NSOperationQueue, NSObject, VSPreferences;
@protocol OS_dispatch_queue;

@interface VSDevice : NSObject <VSManagedProfileConnectionObserver, VSRemoteNotifierDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSMutableSet *observers;
@property (retain) NSString *productVersionString;
@property (retain) NSString *serialNumberString;
@property (retain) NSString *deviceNameString;
@property (retain, nonatomic) NSOperationQueue *propertyFetchQueue;
@property (nonatomic) void /* function */ *copyAnswer;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSPreferences *preferences;
@property (copy, nonatomic) id /* block */ newDeveloperSettingsFetchOperationBlock;
@property (retain, nonatomic) VSManagedProfileConnection *profileConnection;
@property (retain, nonatomic) VSRemoteNotifier *setTopBoxStateRemoteNotifier;
@property (retain, nonatomic) VSRemoteNotifier *developerSettingsRemoteNotifier;
@property (readonly, nonatomic) NSString *bincompatOS;
@property (readonly, nonatomic) NSString *bincompatPlatform;
@property (readonly, nonatomic, getter=isRunningAnInternalBuild) char runningAnInternalBuild;
@property (readonly, nonatomic, getter=isRunningACustomerBuild) char runningACustomerBuild;
@property (readonly, nonatomic) unsigned long long deviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentDevice;
+ (unsigned long long)_deviceTypeWithCopyAnswer:(void /* function */ *)a0;
+ (char)_getMobileGestaltBoolean:(struct __CFString { } *)a0 withCopyAnswer:(void /* function */ *)a1;
+ (char)_runningACustomerBuildWithCopyAnswer:(void /* function */ *)a0;
+ (char)_runningAnInternalBuildWithCopyAnswer:(void /* function */ *)a0;

- (void)dealloc;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (id)serialNumber;
- (id)productVersion;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (id)_stringForKey:(struct __CFString { } *)a0 copyAnswer:(void /* function */ *)a1;
- (id)accountDeletionConfirmationMessageForIdentityProviderDisplayName:(id)a0;
- (void)cloudConfigurationDidChange;
- (id)developerIdentityProviderDeletionConfirmationMessage;
- (void)fetchDeviceManagedSetTopBoxProfileWithCompletion:(id /* block */)a0;
- (void)fetchSetTopBoxProfileWithCompletion:(id /* block */)a0;
- (void)profileConnectionProfileChanged:(id)a0;
- (void)refreshSetTopBoxProfile:(id /* block */)a0;
- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (char)setIgnoreSetTopBoxProfile:(char)a0;
- (id)stringForAMSDeviceFamilies;
- (id)stringForAMSPlatform;
- (id)stringForAMSPlatformAttributes;

@end
