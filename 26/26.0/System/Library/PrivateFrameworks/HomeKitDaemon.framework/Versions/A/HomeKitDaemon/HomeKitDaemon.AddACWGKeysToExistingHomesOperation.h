@class NSPredicate, HMFFlow;

@interface HomeKitDaemon.AddACWGKeysToExistingHomesOperation : HMDBackgroundOperation

@property (class, nonatomic, readonly) NSPredicate *predicate;

@property (nonatomic, readonly) long long qualityOfService;
@property (nonatomic, retain) HMFFlow *flow;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 userData:(id)a1 backGroundOpsManager:(id)a2 scheduledDate:(id)a3 expirationDate:(id)a4 dataSource:(id)a5 dependentOperations:(id)a6;
- (BOOL)mainWithError:(id *)a0;

@end
