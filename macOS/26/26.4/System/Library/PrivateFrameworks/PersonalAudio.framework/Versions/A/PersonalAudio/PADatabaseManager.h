@interface PADatabaseManager : HCDatabaseManager

+ (id)sharedManager;

- (id)containerIdentifier;
- (id)cloudKitContainer;
- (void)logMessage:(id)a0;
- (id)managedObjectModelName;
- (void)contentDidUpdate:(id)a0;
- (void)contentDidUpdateRemotely:(id)a0;
- (BOOL)savePMEConfiguration:(id)a0 pseConfiguration:(id)a1;
- (id)_currentConfigurations;
- (id)currentPMEConfiguration;
- (id)currentPSEConfiguration;
- (void)updatePersonalAudioSettings;

@end
