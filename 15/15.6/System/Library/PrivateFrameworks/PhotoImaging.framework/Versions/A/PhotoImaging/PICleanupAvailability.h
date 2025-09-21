@interface PICleanupAvailability : NSObject

@property (class, readonly, nonatomic) long long status;

+ (void)updateAvailability;
+ (char)_deviceSupportsCleanup;
+ (id)_fetchCleanupAvailability;
+ (id)ensureAvailability:(char)a0;

@end
