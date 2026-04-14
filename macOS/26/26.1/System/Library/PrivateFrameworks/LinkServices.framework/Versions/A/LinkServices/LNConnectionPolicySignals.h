@class NSString;

@interface LNConnectionPolicySignals : NSObject

@property (copy, nonatomic) NSString *preferredExtensionBundleIdentifier;
@property (copy, nonatomic) NSString *preferredBundleIdentifier;
@property (copy, nonatomic) NSString *processInstanceIdentifier;
@property (nonatomic) BOOL shouldExecuteActionOnApplicationBasedOnMetadata;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
