@class CATOperationQueue, NSString, CATOperation, CRKClassroomInstallation, CATTaskClient, NSObject;
@protocol CRKToolCommandDelegate, OS_dispatch_source;

@interface CRKToolCommand : NSObject <CATTaskClientDelegate> {
    NSObject<OS_dispatch_source> *mSIGINTSource;
    CATTaskClient *mTaskClient;
    CATOperationQueue *mOperationQueue;
    CATOperation *mOperation;
}

@property (class, readonly, nonatomic) char supportsJSON;
@property (class, readonly, nonatomic) char supportsVerboseOutput;
@property (class, readonly, nonatomic) char supportsDMFRequest;

@property (nonatomic, getter=shouldPrintJSON) char printJSON;
@property (nonatomic, getter=shouldPrintVerbose) char printVerbose;
@property (nonatomic, getter=shouldUseDMFRequest) char useDMFRequest;
@property (weak, nonatomic) id<CRKToolCommandDelegate> delegate;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) CRKClassroomInstallation *targetClassroomInstallation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)description;
+ (id)aliases;
+ (id)help;
+ (char)handlesProgress;
+ (char)instructorCommand;
+ (void)printHelp;
+ (id)subcommandPath;

- (id)init;
- (void).cxx_destruct;
- (void)client:(id)a0 didInterruptWithError:(id)a1;
- (void)client:(id)a0 didReceiveNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)clientDidConnect:(id)a0;
- (void)clientDidDisconnect:(id)a0;
- (id)transportProvider;
- (void)remoteTaskDidFinish:(id)a0;
- (id)DMFRequestWithArguments:(id)a0;
- (void)_remoteTaskDidFinish:(id)a0;
- (void)_remoteTaskDidProgress:(id)a0;
- (id)arrayByParsingAndRemovingArgumentFlags:(id)a0;
- (void)cleanupAndExitIfNeeded;
- (void)connectToTaskClientWithCompletionBlock:(id /* block */)a0;
- (char)didCommandSucceed;
- (char)didOperationSucceed:(id)a0;
- (void)executeOperation:(id)a0;
- (char)isCommandFinished;
- (id)operationWithClient:(id)a0 arguments:(id)a1;
- (void)remoteTaskDidProgress:(id)a0;
- (id)requestWithArguments:(id)a0;
- (void)runWithArguments:(id)a0;
- (void)runWithClient:(id)a0 arguments:(id)a1;

@end
