@class BMFileBackedCounter, NSUUID, NSString, _PASLock;

@interface CCSetsAccessDaemonDelegate : NSObject <BMAccessDelegate, CCSetBookkeeping> {
    _PASLock *_preparedContainers;
    BMFileBackedCounter *_resourceGenerationCounter;
    NSString *_baseSystemPath;
    BOOL _notifySourcesOnReset;
}

@property (readonly, nonatomic) NSUUID *localDeviceUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultInstance;
+ (id)readDefaultLocalDeviceUUID:(id *)a0;
+ (id)_loadResourceGenerationCounter:(BOOL)a0 baseSystemPath:(id)a1 error:(id *)a2;

- (id)currentSchemaVersion;
- (id)setsDirectoryInContainer:(id)a0;
- (void).cxx_destruct;
- (BOOL)handlesDirectoryCreationForResource:(id)a0 inContainer:(id)a1;
- (BOOL)handlesDirectoryRemovalForResource:(id)a0 inContainer:(id)a1;
- (BOOL)prepareResource:(id)a0 withMode:(unsigned long long)a1 inContainer:(id)a2;
- (BOOL)teardownResource:(id)a0 inContainer:(id)a1;
- (BOOL)_validateCurrentLocalDeviceUUIDsAgainstContainerInfo:(id)a0 container:(id)a1;
- (id)_loadOrCreateContainerInfo:(id)a0 readOnly:(BOOL)a1;
- (id)_resetSetsDirectory:(id)a0;
- (id)_storedLocalIDSIdentifierInContainer:(id)a0;
- (BOOL)_validateCurrentSchemaAgainstContainerInfo:(id)a0 container:(id)a1;
- (BOOL)_validateReadOnlyContainer:(id)a0;
- (id)incrementResourceGenerationCounter;
- (id)initWithBaseSystemPath:(id)a0 notifySourcesOnReset:(BOOL)a1;
- (id)lastMaintenanceDateForResourceContainer:(id)a0;
- (BOOL)loadOrCreateResourceGenerationCounter;
- (id)localIDSDeviceId;
- (BOOL)prepareContainer:(id)a0;
- (BOOL)setLastMaintenanceDateForResourceContainer:(id)a0 date:(id)a1 error:(id *)a2;

@end
