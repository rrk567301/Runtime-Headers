@class NSNumber, CATTaskClient, NSError;

@interface CATRemoteTaskOperation : CATTaskOperation {
    NSError *mClientError;
}

@property (copy, nonatomic) NSNumber *remotePhase;
@property (readonly, nonatomic) CATTaskClient *client;

+ (id)invalidRemoteTaskWithRequest:(id)a0 error:(id)a1;
+ (BOOL)isCancelable;

- (void)cancelOperationIfNeeded;
- (void)cancel;
- (void)processNotificationWithName:(id)a0 userInfo:(id)a1;
- (id)initWithRequest:(id)a0 client:(id)a1;
- (void)clientFailedWithError:(id)a0;
- (void)main;
- (void)processMessage:(id)a0;
- (id)initWithRequest:(id)a0 clientError:(id)a1;
- (void)operationWillFinish;
- (BOOL)isAsynchronous;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)updateProgressWithRemoteProgress:(id)a0;
- (void)updateCompletedUnitCount:(long long)a0 andTotalUnitCount:(long long)a1;
- (void).cxx_destruct;
- (void)fetchProgress;

@end
