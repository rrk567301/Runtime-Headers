@protocol AVTUILogger;

@interface AVTSyncSchedulingAuthority : NSObject <AVTSyncSchedulingAuthority>

@property (readonly, nonatomic) id<AVTUILogger> logger;

- (void).cxx_destruct;
- (void)didReceivePushNotification;
- (id)initWithLogger:(id)a0;
- (void)didResetSync;
- (void)exportDidCompleteSuccessfully;
- (BOOL)exportRequired;
- (void)importDidCompleteSuccessfully;
- (BOOL)importRequired;
- (void)madeLocalChanges;

@end
