@class NSMutableDictionary, NWEntityMapperNEHelper, NWEntityMapperCoalitionWatcher, NWEntityMapperProcessWatcher, NWEntityMapperStaticAssignment, NWEntityMapperDynamicLaunchServices, NSSet;

@interface NWUsageMonitor : NSObject {
    NWEntityMapperCoalitionWatcher *_coalitionUUIDMapper;
    NWEntityMapperStaticAssignment *_staticAssignmentSymptomsUUIDMapper;
    NWEntityMapperStaticAssignment *_staticAssignmentCommCenterUUIDMapper;
    NWEntityMapperNEHelper *_neHelperUUIDMapper;
    NWEntityMapperDynamicLaunchServices *_dynamicLaunchServicesUUIDMapper;
    NWEntityMapperProcessWatcher *_processWatcherUUIDMapper;
    BOOL _useSymptomsMapping;
    BOOL _useNEHelper;
    BOOL _useDynamicLaunchServices;
    BOOL _useCoalitionIDs;
    BOOL _useProcessNames;
    NSSet *_useNEHelperSet;
    NSSet *_appendProcNameSet;
    NSSet *_knownDaemonSet;
    NSMutableDictionary *_reportedLookupFailures;
}

@property (readonly) BOOL debugMode;

+ (void)initialize;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)configure:(id)a0;
- (id)stateDictionary;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (id)processNameForUUID:(id)a0;
- (id)processNameForUUIDString:(id)a0;
- (void)noteUUID:(id)a0 forPid:(int)a1 procname:(char[64] *)a2;
- (void)noteFailedLookupFor:(id)a0 processName:(char *)a1 pid:(int)a2;
- (id)allIdentifiersForUUID:(id)a0 EUUID:(id)a1 pid:(int)a2 epid:(int)a3 procname:(char *)a4;
- (id)bestIdentifierForUUID:(id)a0 EUUID:(id)a1 pid:(int)a2 epid:(int)a3 procname:(char *)a4 derivation:(int *)a5;

@end
