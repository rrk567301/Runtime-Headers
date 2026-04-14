@class NSString;

@interface HMDHomeWalletDataSource : HMFObject <HMDHomeWalletDataSource>

@property int passCodeChangeNotificationToken;
@property (readonly, getter=isResidentCapable) BOOL residentCapable;
@property (readonly) BOOL isWatch;
@property (readonly) long long accessoryWriteMaxRetryCount;
@property (readonly) double accessoryWriteRetryInterval;
@property (readonly) long long walletKeyColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)registerForPasscodeChangeNotificationWithQueue:(id)a0 callback:(id /* block */)a1;
- (void)persistNumberValueToNoBackupStore:(id)a0 withKey:(id)a1;
- (id)numberValueFromNoBackupStoreWithKey:(id)a0;
- (void)showExpressEnabledUserNotificationForWalletKeyWithPassUniqueID:(id)a0 completion:(id /* block */)a1;

@end
