@class PLTimer, DRConfigMonitor, PLNSNotificationOperatorComposition;

@interface PPSSafeguardController : NSObject

@property (retain) DRConfigMonitor *drConfigMonitor;
@property (retain) PLTimer *registerTimer;
@property (retain) PLNSNotificationOperatorComposition *dayChangedNotification;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (id)startDate;
- (unsigned long long)fileTypes;
- (id)workQueue;
- (unsigned long long)isEligible;
- (id)installDate;
- (id)currentDate;
- (id)stopDate;
- (int)startHour;
- (void)setupDRTasking;
- (void)scheduleSubmission;
- (BOOL)registerPLTimer;
- (void)configureBGSTask:(id)a0;
- (void)configureWithDefaultValues;
- (void)configureWithDictionary:(id)a0;
- (int)dataDuration;
- (BOOL)debug_forceEligibility;
- (BOOL)debug_installDate;
- (BOOL)debug_treatAsTestDevice;
- (int)eligibilityDuration;
- (id)eligibilityRange;
- (BOOL)excludeTestDevices;
- (BOOL)handleSubmissionWithBGSTask:(id)a0;
- (BOOL)isTestDeviceForSafeguard;
- (id)lastSubmissionDate;
- (double)minimumLiveOnTime;
- (BOOL)performSubmission;
- (BOOL)performUploadWithTask:(id)a0;
- (void)registerDataCollectionActivity;
- (void)registerDayChangedNotification;
- (void)reportEventToCA:(unsigned long long)a0 didUpload:(BOOL)a1;
- (void)startBGSTask;
- (void)stopBGSTask;
- (int)stopHour;
- (id)todayRange;
- (id)uploadRange;

@end
