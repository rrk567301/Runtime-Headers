@class NSString;

@interface LNConnectionPolicySignals : NSObject

@property (copy, nonatomic) NSString *preferredExtensionBundleIdentifier;
@property (copy, nonatomic) NSString *preferredBundleIdentifier;
@property (copy, nonatomic) NSString *processInstanceIdentifier;
@property (nonatomic) BOOL shouldExecuteActionOnApplicationBasedOnMetadata;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
