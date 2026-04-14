@interface VKCGMAvailability : NSObject

@property (class, readonly) BOOL supportsVI;
@property (class, readonly) BOOL deviceIsEligibleForVI;

@property BOOL supportsVI;
@property BOOL deviceIsEligibleForVI;

+ (id)sharedListener;

- (id)init;
- (void)dealloc;

@end
