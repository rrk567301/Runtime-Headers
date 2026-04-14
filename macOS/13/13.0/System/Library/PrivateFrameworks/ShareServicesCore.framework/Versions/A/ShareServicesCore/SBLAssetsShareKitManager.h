@class SBLShareKitSession, PFDispatchQueue;

@interface SBLAssetsShareKitManager : SBLShareKitManager

@property (readonly) PFDispatchQueue *dispatchQueueSerial;
@property (readonly) PFDispatchQueue *dispatchQueueProviderReply;
@property (readonly) PFDispatchQueue *dispatchQueueProviderWorker;
@property (retain) SBLShareKitSession *session;

+ (BOOL)canShareAsset:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)abort;
- (void)resetSession;
- (void)preflightItemProviders:(id)a0;
- (id)sharingItemsForObjects:(id)a0 sharingParams:(id)a1;
- (id)assetForItemProvider:(id)a0;
- (void)cleanupItems:(id)a0;
- (void)sharingService:(id)a0 shouldPrepareItems:(id)a1 completionHandler:(id /* block */)a2;
- (void)_beginSessionWithCompletionHandler:(id /* block */)a0;
- (void)_presentSharingAlertWithCompletion:(id /* block */)a0;

@end
