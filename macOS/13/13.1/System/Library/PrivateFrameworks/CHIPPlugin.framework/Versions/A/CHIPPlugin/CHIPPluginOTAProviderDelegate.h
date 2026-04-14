@class NSString, CHIPAccessoryServerBrowser, NSObject;
@protocol OS_dispatch_queue;

@interface CHIPPluginOTAProviderDelegate : NSObject <HMFLogging, MTROTAProviderDelegate>

@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (weak, nonatomic) CHIPAccessoryServerBrowser *browser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)handleQueryImageForNodeID:(id)a0 controller:(id)a1 params:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleNotifyUpdateAppliedForNodeID:(id)a0 controller:(id)a1 params:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleBDXTransferSessionEndForNodeID:(id)a0 controller:(id)a1 error:(id)a2;
- (void)handleBDXTransferSessionBeginForNodeID:(id)a0 controller:(id)a1 fileDesignator:(id)a2 offset:(id)a3 completionHandler:(id /* block */)a4;
- (void)handleBDXQueryForNodeID:(id)a0 controller:(id)a1 blockSize:(id)a2 blockIndex:(id)a3 bytesToSkip:(id)a4 completionHandler:(id /* block */)a5;
- (void)handleApplyUpdateRequestForNodeID:(id)a0 controller:(id)a1 params:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithQueue:(id)a0 browser:(id)a1;
- (id)generateUpdateToken;
- (void)applyUpdateTimerExpiredForAccessoryServer:(id)a0 softwareVersion:(id)a1 didTimeout:(id)a2;

@end
