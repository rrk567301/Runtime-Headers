@interface _DKApplicationMetadataKey : NSObject

+ (id)processIdentifier;
+ (id)launchReason;
+ (id)backboardState;
+ (id)extensionHostIdentifier;
+ (id)extensionContainingBundleIdentifier;
+ (id)isNativeArchitecture;
+ (id)dyldPlatform;

@end
