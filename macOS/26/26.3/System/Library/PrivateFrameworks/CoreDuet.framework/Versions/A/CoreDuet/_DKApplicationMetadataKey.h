@interface _DKApplicationMetadataKey : NSObject

+ (id)launchReason;
+ (id)isNativeArchitecture;
+ (id)processIdentifier;
+ (id)shortVersionString;
+ (id)extensionContainingBundleIdentifier;
+ (id)backboardState;
+ (id)exactBundleVersion;
+ (id)extensionHostIdentifier;
+ (id)dyldPlatform;

@end
