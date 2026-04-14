@class MNTrace;

@interface MNTraceLoader : NSObject {
    MNTrace *_trace;
}

- (void).cxx_destruct;
- (id)trace;
- (id)loadTraceWithPath:(id)a0 outError:(out id *)a1;
- (id)loadTraceWithPath:(id)a0 options:(unsigned long long)a1 outError:(out id *)a2;
- (BOOL)_loadInfoTable;
- (BOOL)_loadLocationsTable:(BOOL)a0;
- (BOOL)_loadDirectionsTableAllowDeprecatedProtocol:(BOOL)a0 outError:(out id *)a1;
- (BOOL)_loadETAUpdatesTable;
- (BOOL)_loadCompassHeadingDataTable;
- (BOOL)_loadMotionDataTable;
- (BOOL)_loadVehicleDataTable;
- (BOOL)_loadEVDataTable;
- (BOOL)_loadNavigationEventsTable;
- (BOOL)_loadAnnotatedUserBehaviorTable;
- (BOOL)_loadAnnotatedUserEnvironmentTable;
- (BOOL)_loadNavigationUpdatesTable;
- (BOOL)_loadMiscInfo;
- (BOOL)_loadTraceVersion;
- (BOOL)_updateTraceFromVersion:(unsigned long long)a0 outError:(id *)a1;
- (BOOL)_executeQuery:(id)a0 rowHandler:(id /* block */)a1;
- (id)_handleUpdateError;
- (BOOL)_tableExists:(id)a0;
- (id)_errorWithCode:(long long)a0 errorDescriptionFormat:(id)a1;
- (BOOL)loadExtraData;

@end
