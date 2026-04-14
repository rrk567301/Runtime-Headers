@interface _DKApplicationMetadataKey : NSObject

+ (id)launchReason;
+ (id)processIdentifier;
+ (id)backboardState;
+ (id)exactBundleVersion;
+ (id)shortVersionString;
+ (id)dyldPlatform;
+ (id)isNativeArchitecture;
+ (id)extensionHostIdentifier;
+ (id)extensionContainingBundleIdentifier;

@end
