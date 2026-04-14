@protocol PMMDataProtectionMonitorDelegate;

@interface PMMDataProtectionMonitor : NSObject {
    id<PMMDataProtectionMonitorDelegate> _delegate;
    long long _encryptedDataAvailability;
    BOOL _unlockedSinceBoot;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (weak, nonatomic) id<PMMDataProtectionMonitorDelegate> delegate;
@property (readonly, nonatomic) long long encryptedDataAvailability;
@property (readonly, nonatomic) BOOL unlockedSinceBoot;
@property (readonly, nonatomic) long long dataProtectionStatus;

+ (id)PMMDataProtectionMonitorDataProtectionStatus:(long long)a0;
+ (id)PMMDataProtectionMonitorLockStateToString:(long long)a0;
+ (id)PMMDataProtectionMonitorEncryptedDataAvailabilityToString:(long long)a0;

- (void)setDataProtectionStatus:(BOOL)a0;
- (void)setEncryptedDataAvailability:(long long)a0;
- (void)dealloc;
- (void)handleUnlockedSinceBoot;
- (void)_registerForKeyBagNotifications;
- (void)setUnlockedSinceBoot:(BOOL)a0;
- (BOOL)dataProtectionEnabled;
- (id)init;
- (void)handkeKeybagLockStatusChange:(long long)a0;
- (void).cxx_destruct;

@end
