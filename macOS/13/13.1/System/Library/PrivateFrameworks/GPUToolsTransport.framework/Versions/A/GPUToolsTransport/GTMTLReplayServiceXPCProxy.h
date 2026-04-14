@class NSSet, NSObject;
@protocol GTDataProviderService, OS_os_log, GTXPCConnection;

@interface GTMTLReplayServiceXPCProxy : NSObject <GTMTLReplayService> {
    id<GTXPCConnection> _connection;
    NSSet *_ignoreMethods;
    id /* block */ _accelerationDataReceivedHandler;
    id /* block */ _queryShaderInfoDataReceivedHandler;
    id /* block */ _derivedCounterDataDataReceivedHandler;
    id /* block */ _connectionhandler;
    id<GTDataProviderService> _dataProvider;
    NSObject<OS_os_log> *_log;
}

- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)dispatchMessage:(id)a0 replyConnection:(id)a1;
- (void)traceConfiguration:(id)a0;
- (void)overridesConfiguration:(id)a0;
- (void)invalidateSavePointerAliases;
- (void)enableDrawCallPresent:(BOOL)a0;
- (void)enableWireframePresent:(BOOL)a0;
- (void)enableOutlinePresent:(BOOL)a0;
- (void)wireframeLineWidth:(float)a0;
- (void)signalInterposeSemaphore;
- (void)endDebugArchive;
- (void)beginAccelerationStructureSessionWithObjectID:(unsigned long long)a0 functionIndex:(unsigned int)a1 dataReceivedHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)sendAccelerationStructureDataWithSessionID:(unsigned long long)a0 data:(id)a1;
- (void)teardownAccelerationStructureSession:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)generateListOfDebugFilesInCacheWithCompletionHandler:(id /* block */)a0;
- (void)sendDebuggingFiles:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateLibraries:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteAllArchivesWithCompletionHandler:(id /* block */)a0;
- (void)beginDebugArchive:(id)a0 extensionToken:(id)a1 debugFiles:(id)a2 completionHandler:(id /* block */)a3;
- (void)debugFuncStop:(unsigned long long)a0;
- (void)resourcesUsedForFunctionIndex:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchResourceObject:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchResourceObjectBatch:(id)a0 compressionKey:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateThumbnails:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateDependencyGraphThumbnails:(id)a0 completionHandler:(id /* block */)a1;
- (void)queryInducedGPUPerfStateWithCompletionHandler:(id /* block */)a0;
- (void)queryShaderInfo:(id)a0 timelineInfo:(BOOL)a1 dataReceivedHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)sendQueryShaderInfoData:(id)a0;
- (void)derivedCounterData:(id)a0 attributes:(id)a1 dataReceivedHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)sendDerivedCounterDataData:(id)a0;
- (void)addBatchFilteringRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadAnalysis:(id /* block */)a0;
- (void)generateShaderDebuggerTrace:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadArchives;
- (void)replayArchive;
- (void)updateResourceObject:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginAccelerationStructureSession;
- (void)accelerationStructureData;
- (void)teardownAccelerationStructureSession;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1 dataProvider:(id)a2;
- (void)sendDerivedCounterDataData_:(id)a0 replyConnection:(id)a1;
- (void)sendQueryShaderInfoData_:(id)a0 replyConnection:(id)a1;
- (void)sendAccelerationStructureDataWithSessionID_data_:(id)a0 replyConnection:(id)a1;

@end
