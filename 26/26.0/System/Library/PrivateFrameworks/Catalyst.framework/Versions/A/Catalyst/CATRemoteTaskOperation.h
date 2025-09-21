@class NSNumber, CATTaskClient, NSError;

@interface CATRemoteTaskOperation : CATTaskOperation {
    NSError *mClientError;
}

@property (copy, nonatomic) NSNumber *remotePhase;
@property (readonly, nonatomic) CATTaskClient *client;

+ (BOOL)isCancelable;
+ (id)invalidRemoteTaskWithRequest:(id)a0 error:(id)a1;

- (BOOL)isAsynchronous;
- (void)processNotificationWithName:(id)a0 userInfo:(id)a1;
- (id)initWithRequest:(id)a0 clientError:(id)a1;
- (void)processMessage:(id)a0;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)main;
- (id)initWithRequest:(id)a0 client:(id)a1;
- (void)cancel;
- (void)fetchProgress;
- (void)clientFailedWithError:(id)a0;
- (void)operationWillFinish;
- (void)updateCompletedUnitCount:(long long)a0 andTotalUnitCount:(long long)a1;
- (void).cxx_destruct;
- (void)cancelOperationIfNeeded;
- (void)updateProgressWithRemoteProgress:(id)a0;

@end
