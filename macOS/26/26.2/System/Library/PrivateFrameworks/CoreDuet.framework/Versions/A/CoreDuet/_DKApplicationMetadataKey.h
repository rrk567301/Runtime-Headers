@interface _DKApplicationMetadataKey : NSObject

+ (id)launchReason;
+ (id)dyldPlatform;
+ (id)exactBundleVersion;
+ (id)processIdentifier;
+ (id)extensionHostIdentifier;
+ (id)extensionContainingBundleIdentifier;
+ (id)shortVersionString;
+ (id)backboardState;
+ (id)isNativeArchitecture;

@end
