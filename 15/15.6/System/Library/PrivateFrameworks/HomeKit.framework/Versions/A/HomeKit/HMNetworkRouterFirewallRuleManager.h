@class HMFMessageDestination, HMHomeManager;

@interface HMNetworkRouterFirewallRuleManager : NSObject

@property (readonly, weak, nonatomic) HMHomeManager *homeManager;
@property (readonly, nonatomic) HMFMessageDestination *messageDestination;

- (void).cxx_destruct;
- (void)__sendMessage:(id)a0;
- (void)_addOverrides:(id)a0 replace:(char)a1 completion:(id /* block */)a2;
- (void)_dumpCloudRecordsForProductGroup:(id)a0 productNumber:(id)a1 rawOutput:(char)a2 listOnly:(char)a3 verifySignatures:(char)a4 completion:(id /* block */)a5;
- (void)_dumpLocalRulesForProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2 ignoreOverrides:(char)a3 rawOutput:(char)a4 completion:(id /* block */)a5;
- (void)_dumpPairedMetadataForProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2 ignoreOverrides:(char)a3 rawOutput:(char)a4 completion:(id /* block */)a5;
- (void)_fetchCloudChangesWithForceChangesFound:(char)a0 completion:(id /* block */)a1;
- (void)_removeOverridesForProductGroup:(id)a0 productNumber:(id)a1 completion:(id /* block */)a2;
- (void)addOverrides:(id)a0 completion:(id /* block */)a1;
- (void)dumpAllLocalRulesIgnoringOverrides:(char)a0 rawOutput:(char)a1 completion:(id /* block */)a2;
- (void)dumpCloudRecordsForProductGroup:(id)a0 productNumber:(id)a1 rawOutput:(char)a2 verifySignatures:(char)a3 completion:(id /* block */)a4;
- (void)dumpLocalRulesForProductGroup:(id)a0 ignoreOverrides:(char)a1 rawOutput:(char)a2 completion:(id /* block */)a3;
- (void)dumpLocalRulesForProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2 ignoreOverrides:(char)a3 rawOutput:(char)a4 completion:(id /* block */)a5;
- (void)dumpPairedMetadataForProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2 ignoreOverrides:(char)a3 rawOutput:(char)a4 completion:(id /* block */)a5;
- (void)fetchCloudChangesAndForceChangesFoundWithCompletion:(id /* block */)a0;
- (void)fetchCloudChangesWithCompletion:(id /* block */)a0;
- (id)initWithHomeManager:(id)a0;
- (void)listCloudRecordsForProductGroup:(id)a0 rawOutput:(char)a1 completion:(id /* block */)a2;
- (void)removeAllLocalRulesWithCompletion:(id /* block */)a0;
- (void)removeAllOverridesWithCompletion:(id /* block */)a0;
- (void)removeOverridesForProductGroup:(id)a0 productNumber:(id)a1 completion:(id /* block */)a2;
- (void)setOverrides:(id)a0 completion:(id /* block */)a1;

@end
