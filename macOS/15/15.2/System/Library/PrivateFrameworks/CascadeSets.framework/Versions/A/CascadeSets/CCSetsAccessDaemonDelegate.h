@class NSString, NSMutableDictionary;

@interface CCSetsAccessDaemonDelegate : NSObject <BMAccessDelegate> {
    NSMutableDictionary *_preparedContainers;
    NSString *_localDeviceId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)currentSchemaVersion;
- (BOOL)handlesDirectoryCreationForResource:(id)a0 inContainer:(id)a1;
- (BOOL)handlesDirectoryRemovalForResource:(id)a0 inContainer:(id)a1;
- (BOOL)prepareResource:(id)a0 withMode:(unsigned long long)a1 inContainer:(id)a2;
- (BOOL)teardownResource:(id)a0 inContainer:(id)a1;
- (id)_loadOrCreateContainerInfo:(id)a0;
- (id)_resetSetsDirectory:(id)a0;
- (BOOL)prepareContainer:(id)a0;

@end
