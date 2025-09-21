@interface FeatureFlagsManager : NSObject

+ (BOOL)isExtensionAttestationEnabled;
+ (BOOL)isMacEnabled;
+ (BOOL)isModernizationEnabled;

@end
