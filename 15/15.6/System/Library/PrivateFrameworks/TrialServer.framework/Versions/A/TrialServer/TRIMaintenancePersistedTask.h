@interface TRIMaintenancePersistedTask : TRIPBMessage

@property (nonatomic) int retryCount;
@property (nonatomic) char hasRetryCount;

+ (id)descriptor;

@end
