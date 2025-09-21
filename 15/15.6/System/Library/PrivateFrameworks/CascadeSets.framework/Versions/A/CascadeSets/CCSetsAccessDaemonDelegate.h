@class BMFileBackedCounter, NSString, NSMutableDictionary, NSUUID;

@interface CCSetsAccessDaemonDelegate : NSObject <BMAccessDelegate> {
    NSMutableDictionary *_preparedContainers;
    BMFileBackedCounter *_resourceGenerationCounter;
    NSUUID *_localDeviceUUID;
    NSString *_baseSystemPath;
    char _notifySourcesOnReset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultInstance;

- (void).cxx_destruct;
- (id)currentSchemaVersion;
- (char)handlesDirectoryCreationForResource:(id)a0 inContainer:(id)a1;
- (char)handlesDirectoryRemovalForResource:(id)a0 inContainer:(id)a1;
- (char)prepareResource:(id)a0 withMode:(unsigned long long)a1 inContainer:(id)a2;
- (id)setsDirectoryInContainer:(id)a0;
- (char)teardownResource:(id)a0 inContainer:(id)a1;
- (char)_validateCurrentLocalDeviceUUIDsAgainstContainerInfo:(id)a0 container:(id)a1;
- (id)_loadOrCreateContainerInfo:(id)a0 readOnly:(char)a1;
- (id)_resetSetsDirectory:(id)a0;
- (id)_storedLocalIDSIdentifierInContainer:(id)a0;
- (char)_validateCurrentSchemaAgainstContainerInfo:(id)a0 container:(id)a1;
- (char)_validateReadOnlyContainer:(id)a0;
- (id)incrementResourceGenerationCounter;
- (id)initWithBaseSystemPath:(id)a0 notifySourcesOnReset:(char)a1;
- (char)loadOrCreateResourceGenerationCounter;
- (id)localIDSDeviceId;
- (char)prepareContainer:(id)a0;

@end
