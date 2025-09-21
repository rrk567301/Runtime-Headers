@interface VKCGMAvailability : NSObject

@property (class, readonly) BOOL supportsVI;

@property BOOL supportsVI;

+ (id)sharedListener;

- (void)dealloc;
- (id)init;

@end
