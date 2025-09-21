@protocol PMMDataProtectionMonitorDelegate;

@interface PMMDataProtectionMonitor : NSObject {
    id<PMMDataProtectionMonitorDelegate> _delegate;
    long long _encryptedDataAvailability;
    char _unlockedSinceBoot;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (weak, nonatomic) id<PMMDataProtectionMonitorDelegate> delegate;
@property (readonly, nonatomic) long long encryptedDataAvailability;
@property (readonly, nonatomic) char unlockedSinceBoot;
@property (readonly, nonatomic) long long dataProtectionStatus;

+ (id)PMMDataProtectionMonitorDataProtectionStatus:(long long)a0;
+ (id)PMMDataProtectionMonitorLockStateToString:(long long)a0;
+ (id)PMMDataProtectionMonitorEncryptedDataAvailabilityToString:(long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handleUnlockedSinceBoot;
- (void)setEncryptedDataAvailability:(long long)a0;
- (void)setUnlockedSinceBoot:(char)a0;
- (void)_registerForKeyBagNotifications;
- (char)dataProtectionEnabled;
- (void)handkeKeybagLockStatusChange:(long long)a0;
- (void)setDataProtectionStatus:(char)a0;

@end
