@class NSString, SHShazamKitServiceConnectionProvider, NSXPCConnection;

@interface SHShazamKitServiceConnection : NSObject <SHShazamKitClient, SHShazamKitService>

@property (readonly) SHShazamKitServiceConnectionProvider *connectionProvider;
@property (readonly) NSXPCConnection *connection;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } connectionLock;
@property (weak) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithConnectionProvider:(id)a0;
- (void)tearDownConnection;
- (void)matcher:(id)a0 didProduceResponse:(id)a1;
- (void)startRecognitionForRequest:(id)a0;
- (oneway void)sendEventSignal:(id)a0;
- (void)_synchronizeSnapshot:(id)a0 startCondition:(id)a1;
- (void)_libraryInfoWithCompletionHandler:(id /* block */)a0;
- (void)_queryLibraryWithParameters:(id)a0 completionHandler:(id /* block */)a1;
- (void)mediaItemForShazamID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_libraryWillBeginSync:(id)a0;
- (void)_library:(id)a0 didChangeWithSnapshot:(id)a1;
- (void)_library:(id)a0 didProduceError:(id)a1 failedItemIdentifiers:(id)a2;
- (void)_libraryDidCompleteSync:(id)a0;
- (void)attachDefaultConnectionHandlers;

@end
