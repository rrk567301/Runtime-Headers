@class MNTrace;

@interface MNTraceLoader : NSObject {
    MNTrace *_trace;
}

- (void).cxx_destruct;
- (id)trace;
- (char)_loadAnnotatedUserBehaviorTable;
- (id)_errorWithCode:(long long)a0 errorDescriptionFormat:(id)a1;
- (char)_executeQuery:(id)a0 rowHandler:(id /* block */)a1;
- (id)_handleUpdateError;
- (char)_loadAnnotatedUserEnvironmentTable;
- (char)_loadCompassHeadingDataTable;
- (char)_loadDirectionsTableAllowDeprecatedProtocol:(char)a0 outError:(out id *)a1;
- (char)_loadETAUpdatesTable;
- (char)_loadEVDataTable;
- (char)_loadInfoTable;
- (char)_loadLocationsTable:(char)a0;
- (char)_loadMiscInfo;
- (char)_loadMotionDataTable;
- (char)_loadNavigationEventsTable;
- (char)_loadNavigationUpdatesTable;
- (char)_loadNetworkEvents;
- (char)_loadRouteCreationActionsTable;
- (char)_loadTraceVersion;
- (char)_loadVehicleDataTable;
- (char)_tableExists:(id)a0;
- (char)_updateTraceFromVersion:(unsigned long long)a0 outError:(id *)a1;
- (char)loadExtraData;
- (id)loadTraceWithPath:(id)a0 options:(long long)a1 outError:(out id *)a2;
- (id)loadTraceWithPath:(id)a0 outError:(out id *)a1;

@end
