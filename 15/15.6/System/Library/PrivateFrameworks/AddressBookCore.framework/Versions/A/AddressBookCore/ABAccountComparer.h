@class NSDictionary;

@interface ABAccountComparer : NSObject

@property (retain) NSDictionary *accountConfigurationsByIdentifier;

+ (id)os_log;
+ (id)comparisonKeys;
+ (id)iCloudDomains;

- (void).cxx_destruct;
- (void)setConfiguration:(id)a0 forIdentifier:(id)a1;
- (unsigned long long)effectiveServerPortForConfiguration:(id)a0;
- (id)existingAccountIdentifierForConfiguration:(id)a0;
- (id)initWithAccountConfigurationsByIdentifier:(id)a0;
- (char)isExistingConfiguration:(id)a0 equivalentToProposedConfig:(id)a1;
- (char)isExistingValue:(id)a0 equivalentToProposedValue:(id)a1 forConfigKey:(id)a2;
- (char)isHost:(id)a0 equivalentToHost:(id)a1;
- (char)isServerPortConfiguration:(id)a0 equivalentToProposedConfig:(id)a1;
- (char)isUseSSLConfiguration:(id)a0 equivalentToProposedConfig:(id)a1;
- (char)isUsername:(id)a0 equivalentToUsername:(id)a1;
- (char)isiCloudUsername:(id)a0 equivalentToUserName:(id)a1;
- (id)usernameByStrippingDomain:(id)a0;

@end
