@class NSString;

@interface HMDHomeWalletDataSource : HMFObject <HMDHomeWalletDataSource>

@property int passCodeChangeNotificationToken;
@property (readonly, getter=isResidentCapable) char residentCapable;
@property (readonly) char isWatch;
@property (readonly) long long accessoryWriteMaxRetryCount;
@property (readonly) double accessoryWriteRetryInterval;
@property (readonly) long long walletKeyColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)canNotifyAboutExpressModeWithCompletion:(id /* block */)a0;
- (id)numberValueFromNoBackupStoreWithKey:(id)a0;
- (void)persistNumberValueToNoBackupStore:(id)a0 withKey:(id)a1;
- (char)registerForPasscodeChangeNotificationWithQueue:(id)a0 callback:(id /* block */)a1;

@end
