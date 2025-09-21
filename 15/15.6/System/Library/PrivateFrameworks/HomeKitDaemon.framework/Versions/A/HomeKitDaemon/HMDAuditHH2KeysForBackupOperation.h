@class NSString;

@interface HMDAuditHH2KeysForBackupOperation : HMDBackgroundOperation <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicate;
+ (id)logCategory;
+ (void)recordCurrentBackupRunToUserDefault;
+ (void)resetHH2KeyBackupOperationFromUserDefault;
+ (char)shouldWeScheduleHH2KeyBackupOperation;

- (long long)qualityOfService;
- (id)logIdentifier;
- (char)mainWithError:(id *)a0;

@end
