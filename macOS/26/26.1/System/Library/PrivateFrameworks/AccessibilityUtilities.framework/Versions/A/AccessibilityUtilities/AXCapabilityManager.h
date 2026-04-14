@interface AXCapabilityManager : NSObject

+ (id)sharedManager;

- (BOOL)isCapabilityAvailable:(id)a0;
- (id)capabilities;
- (BOOL)isAccessibilityCapability:(id)a0;

@end
