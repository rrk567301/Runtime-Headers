@class BRCThrottle;

@interface BRCThrottleProvider : NSObject

@property (readonly, nonatomic) BRCThrottle *appLibraryResetThrottle;
@property (readonly, nonatomic) BRCThrottle *sharedAppLibraryResetThrottle;
@property (readonly, nonatomic) BRCThrottle *operationFailureThrottle;
@property (readonly, nonatomic) BRCThrottle *syncClientZoneThrottle;
@property (readonly, nonatomic) BRCThrottle *syncClientZoneErrorThrottle;

- (void)resetThrottles;
- (id)init;
- (void).cxx_destruct;

@end
