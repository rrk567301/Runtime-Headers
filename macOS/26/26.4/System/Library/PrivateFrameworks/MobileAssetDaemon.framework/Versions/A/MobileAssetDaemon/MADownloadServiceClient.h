@class NSString, NSXPCConnection, NSDictionary, NSObject, NSMutableArray;
@protocol MADownloadServiceXPCConnectionProviderProtocol, MABrainLoaderProtocol, OS_dispatch_queue, MADownloadServiceProtocol;

@interface MADownloadServiceClient : NSObject <MADownloadClientProtocol>

@property unsigned long long serviceType;
@property (retain, nonatomic) NSXPCConnection *serviceConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *asyncCommandsHandlerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *startDownloadRequestsQueue;
@property (copy) id /* block */ serviceInitializationCompletedCallback;
@property (copy) id /* block */ downloadProgressCallback;
@property (copy) id /* block */ downloadCompletedCallback;
@property (copy) id /* block */ availabilityChangedCallback;
@property unsigned long long numTasksInFlight;
@property BOOL daemonNotifiedOfInitializationComplete;
@property (retain) NSMutableArray *pendingRequests;
@property (retain, nonatomic) id<MADownloadServiceXPCConnectionProviderProtocol> connectionProvider;
@property (retain, nonatomic) id<MABrainLoaderProtocol> brainLoader;
@property (retain) NSDictionary *brainFeatures;
@property BOOL connectingToService;
@property (readonly, nonatomic) id<MADownloadServiceProtocol> serviceProxy;
@property BOOL serviceIsInitialized;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)copyBrainLoadErrorDomainSummaryStringForError:(id)a0;
+ (id)copyParsedErrorReasonFromBrainLoadError:(id)a0 unmetRequirements:(unsigned long long)a1;
+ (id)copySummaryStringForCryptexLoadError:(id)a0;
+ (id)copySummaryStringForDownloadServiceError:(id)a0;
+ (id)copySummaryStringForTrustCacheLoadError:(id)a0;
+ (id)copySummaryStringForUnmetConstraints:(unsigned long long)a0;

- (void)disconnect;
- (BOOL)isConnected;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performOperations:(id)a0;
- (void)attemptDeferredReconnect:(long long)a0;
- (BOOL)cancelDownloadForTask:(id)a0 error:(id *)a1;
- (void)cancelDownloadForTaskAsync:(id)a0 callback:(id /* block */)a1;
- (BOOL)connectToService:(id *)a0;
- (BOOL)connectToServiceOfType:(unsigned long long)a0 unmetRequirements:(unsigned long long *)a1 outError:(id *)a2;
- (BOOL)connectedToRemoteServiceOnConnection:(id)a0;
- (id)constructErrorWithDescription:(id)a0 code:(long long)a1 underlying:(id)a2;
- (void)downloadCompleted:(id)a0;
- (void)downloadProgressUpdate:(id)a0;
- (id)downloadServiceNameForType:(unsigned long long)a0;
- (id)getAllDownloadingTasks:(id *)a0;
- (void)getAllDownloadingTasksAsync:(id /* block */)a0;
- (unsigned long long)getDownloadSessionType;
- (void)handleDownloadServiceConnectionInterrupted;
- (void)handleDownloadServiceConnectionInvalidated;
- (id)initWithCallbacks:(id /* block */)a0 progressCallback:(id /* block */)a1 downloadCompletedCallback:(id /* block */)a2 availabilityChangedCallback:(id /* block */)a3 connectionProvider:(id)a4 brainLoader:(id)a5;
- (void)notifyClientAvailabilityChanged:(unsigned long long)a0;
- (BOOL)registerWithService:(id *)a0;
- (id)registeredServiceConnection;
- (void)serviceInitializationCompleted:(BOOL)a0 error:(id)a1;
- (BOOL)setupServiceConnection:(id *)a0;
- (void)shutdownCurrentService;
- (void)startDownloadWithParameters:(id)a0 replyingWith:(id /* block */)a1;
- (void)syncUpStateWithService;
- (BOOL)updateDownloadOptionsForTask:(id)a0 options:(id)a1 error:(id *)a2;

@end
