@class NSError, PKInstallSandbox, NSArray, NSSet, PKInstallRequest, PKInstallOperationController, NSObject, PKInstallAnalyzer;
@protocol OS_dispatch_queue;

@interface PKInstall : NSObject {
    PKInstallRequest *_installRequest;
    id _delegate;
    PKInstallSandbox *_installSandbox;
    PKInstallAnalyzer *_installAnalyzer;
    PKInstallOperationController *_installController;
    NSObject<OS_dispatch_queue> *_installControllerUpdateQueue;
    BOOL _isCancelled;
    int _installState;
    NSArray *_clientSideRegistrationPaths;
    NSSet *_previousPackageIdentifiersSharingGroupsWithCurrentRequest;
}

@property (getter=isDone) BOOL done;
@property (retain) NSError *error;
@property BOOL installStarted;
@property BOOL shouldSetResponsibility;

+ (BOOL)_DebuggingQoSEnabled;

- (void)dealloc;
- (int)installState;
- (BOOL)cancel;
- (id)request;
- (double)estimatedTimeRemaining;
- (double)progressValue;
- (BOOL)canCancel;
- (void)_releaseResources;
- (id)initWithRequest:(id)a0 delegate:(id)a1 error:(id *)a2;
- (id)_currentPackageSpecifier;
- (void)setResponsibilityToClient;
- (void)_installRejectedWithError:(id)a0;
- (void)_startWithQualityOfServiceClass:(unsigned int)a0;
- (id)registrationPaths;
- (void)clearResponsibilityFromClient;
- (void)_installMain:(id)a0;
- (id)_installController;
- (id)_previousPackageIdentifiersSharingGroupsWithCurrentRequest;
- (void)_setInstallController:(id)a0;
- (void)_handleCanCancelDidChange:(id)a0;
- (void)_setResponsibilityForClientAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)_clearResponsibilityForClientAuditToken:(struct { unsigned int x0[8]; })a0;

@end
