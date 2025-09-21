@class NSString;

@interface LNConnectionPolicySignals : NSObject

@property (copy, nonatomic) NSString *preferredExtensionBundleIdentifier;
@property (copy, nonatomic) NSString *preferredBundleIdentifier;
@property (copy, nonatomic) NSString *processInstanceIdentifier;
@property (nonatomic) char shouldExecuteActionOnApplicationBasedOnMetadata;

- (id)init;
- (void).cxx_destruct;

@end
