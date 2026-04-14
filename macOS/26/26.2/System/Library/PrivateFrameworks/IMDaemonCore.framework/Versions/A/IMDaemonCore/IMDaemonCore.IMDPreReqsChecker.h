@class NSError;

@interface IMDaemonCore.IMDPreReqsChecker : NSObject <IMDaemonCore.SyncPreReqsVerifying> {
    void /* unknown type, empty encoding */ logger;
}

- (void).cxx_destruct;
- (id)init;
- (void)verifyAllPreReqsWithRequireEnablement:(BOOL)a0 completionHandler:(void (^)(NSError *))a1;

@end
