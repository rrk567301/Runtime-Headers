@class NSString, NSXPCConnection;
@protocol SHXPCServiceProxy;

@interface SHShazamXPCServiceProxyConnection : NSObject <SHXPCServiceProxy>

@property (retain) NSXPCConnection *connection;
@property (retain) id<SHXPCServiceProxy> proxy;
@property (copy) id /* block */ connectionErrorHandler;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (weak) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (oneway void)stop;
- (void)sendEventSignal:(id)a0;
- (void)mediaItemForShazamID:(id)a0 completionHandler:(id /* block */)a1;
- (void)startRecognitionForRequest:(id)a0;
- (void)_synchronizeSnapshot:(id)a0 trigger:(id)a1;
- (void)_libraryInfoWithCompletionHandler:(id /* block */)a0;
- (void)_fetchLibraryTracksWithParameters:(id)a0 completionHandler:(id /* block */)a1;
- (void)attachDefaultConnectionHandlers;
- (void)removeDefaultConnectionHandlers;

@end
