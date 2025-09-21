@protocol AVTUILogger;

@interface AVTSyncSchedulingAuthority : NSObject <AVTSyncSchedulingAuthority>

@property (readonly, nonatomic) id<AVTUILogger> logger;

- (void).cxx_destruct;
- (id)initWithLogger:(id)a0;
- (void)didReceivePushNotification;
- (void)didResetSync;
- (void)exportDidCompleteSuccessfully;
- (char)exportRequired;
- (void)importDidCompleteSuccessfully;
- (char)importRequired;
- (void)madeLocalChanges;

@end
