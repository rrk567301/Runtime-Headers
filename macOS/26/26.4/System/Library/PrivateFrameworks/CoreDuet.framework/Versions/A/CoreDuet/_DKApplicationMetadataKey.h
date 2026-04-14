@interface _DKApplicationMetadataKey : NSObject

+ (id)shortVersionString;
+ (id)launchReason;
+ (id)dyldPlatform;
+ (id)processIdentifier;
+ (id)extensionContainingBundleIdentifier;
+ (id)backboardState;
+ (id)exactBundleVersion;
+ (id)extensionHostIdentifier;
+ (id)isNativeArchitecture;

@end
