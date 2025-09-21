@protocol AVTUILogger;

@interface AVTSyncSchedulingAuthority : NSObject <AVTSyncSchedulingAuthority>

@property (readonly, nonatomic) id<AVTUILogger> logger;

- (void)didReceivePushNotification;
- (void).cxx_destruct;
- (id)initWithLogger:(id)a0;
- (void)didResetSync;
- (void)exportDidCompleteSuccessfully;
- (BOOL)exportRequired;
- (void)importDidCompleteSuccessfully;
- (BOOL)importRequired;
- (void)madeLocalChanges;

@end
