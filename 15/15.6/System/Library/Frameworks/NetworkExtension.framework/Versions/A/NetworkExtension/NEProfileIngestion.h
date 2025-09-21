@class NSString, NEConfigurationManager, NEConfiguration, NSMutableArray;

@interface NEProfileIngestion : NSObject <NEProfileIngestionDelegate>

@property (readonly) NSString *clientName;
@property (readonly) NSString *payloadType;
@property (readonly) NEConfigurationManager *manager;
@property (readonly) struct AuthorizationOpaqueRef { } *authorization;
@property (retain) NSMutableArray *currentConfigurations;
@property (retain) NEConfiguration *ingestedConfiguration;

+ (id)getServiceIDForPayload:(id)a0;
+ (void)profileMigrationComplete;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)findConfigurationByPayloadUUID:(id)a0;
- (id)copyManagedConfigurationIDs;
- (char)createConfigurationFromPayload:(id)a0 payloadType:(id)a1;
- (char)enableAlwaysOnVpn;
- (void)enableDefaultService;
- (id)findConfigurationByConfigurationID:(id)a0;
- (id)findConfigurationByName:(id)a0;
- (id)getCertificatesForConfigurationWithIdentifier:(id)a0;
- (id)initWithNameAndAuthorization:(id)a0 authorization:(struct AuthorizationOpaqueRef { } *)a1;
- (id)initWithNameAndType:(id)a0 payloadType:(id)a1;
- (char)isInstalled:(id)a0;
- (char)loadConfigurationsForceReloadFromDisk;
- (char)lockConfigurations;
- (void)removeAllConfigurationsWithPayload:(id)a0 profile:(id)a1;
- (char)removeConfiguration:(id)a0;
- (char)removeConfigurationWithIdentifier:(id)a0;
- (char)removeIngestedConfiguration;
- (void)removeOrphanConfigurations:(id)a0 profileUUID:(id)a1;
- (char)saveIngestedConfiguration;
- (char)saveIngestedConfiguration:(id *)a0;
- (id)setAsideConfigurationName:(id)a0 unsetAside:(char)a1;
- (void)unlockConfigurations;
- (char)updateAccountIdentifiers:(id)a0;
- (char)updateAppLayerVPNMappingRules:(id)a0;
- (char)updateDefaultAfterAddingConfiguration;
- (char)updateDefaultAfterDeletingConfiguration;
- (char)updateManagedAppRules:(id)a0;
- (char)updatePerAppMappingRules:(id)a0;

@end
