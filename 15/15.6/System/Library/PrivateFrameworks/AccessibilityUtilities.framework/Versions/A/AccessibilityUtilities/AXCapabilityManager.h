@interface AXCapabilityManager : NSObject

+ (id)sharedManager;

- (id)capabilities;
- (char)isAccessibilityCapability:(id)a0;
- (char)isCapabilityAvailable:(id)a0;

@end
