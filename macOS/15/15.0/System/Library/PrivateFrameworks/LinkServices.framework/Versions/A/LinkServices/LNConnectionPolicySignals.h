@class NSString;

@interface LNConnectionPolicySignals : NSObject

@property (copy, nonatomic) NSString *preferredExtensionBundleIdentifier;
@property (copy, nonatomic) NSString *preferredBundleIdentifier;
@property (nonatomic) BOOL shouldExecuteActionOnApplicationBasedOnMetadata;

- (id)init;
- (void).cxx_destruct;

@end
