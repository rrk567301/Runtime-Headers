@class CKContainer;

@interface DRSCloudKitHelper : NSObject

@property (retain, nonatomic) CKContainer *_targetContainer;
@property (readonly, nonatomic) long long environment;

+ (id)prodContainerHelper;
+ (id)sandboxContainerHelper;

- (void).cxx_destruct;
- (id)initWithContainer:(id)a0 environment:(long long)a1;
- (void)_configureOperation:(id)a0 container:(id)a1 xpcActivity:(id)a2;
- (id)_requestsPassingUploadSizeCap:(id)a0 remainingQuota:(unsigned long long)a1;
- (void)_uploadRecords:(id)a0 containerName:(id)a1 xpcActivity:(id)a2 completionHandler:(id /* block */)a3;
- (void)shouldUploadRequests:(id)a0 xpcActivity:(id)a1 replyHandler:(id /* block */)a2;
- (void)_sendDecisionServerRequests:(id)a0 xpcActivity:(id)a1 replyHandler:(id /* block */)a2;
- (void)uploadRequests:(id)a0 contactDecisionServer:(BOOL)a1 xpcActivity:(id)a2 remainingUploadQuota:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)shouldEnableDataGathering:(id)a0 xpcActivity:(id)a1 replyHandler:(id /* block */)a2;
- (void)reportTerminalRequestStats:(id)a0 xpcActivity:(id)a1 replyHandler:(id /* block */)a2;

@end
