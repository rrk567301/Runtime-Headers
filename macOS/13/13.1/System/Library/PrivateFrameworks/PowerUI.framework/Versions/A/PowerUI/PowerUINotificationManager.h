@class UNUserNotificationCenter, NSString, NSObject, NSUserDefaults;
@protocol OS_os_log, OS_dispatch_queue;

@interface PowerUINotificationManager : NSObject <UNUserNotificationCenterDelegate>

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) UNUserNotificationCenter *unCenter;
@property (retain, nonatomic) NSString *lastScheduledFullChargeNotificationID;
@property (nonatomic) BOOL immediateCharge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)fullChargeDeadlineStringFromDate:(id)a0;
+ (id)pausedNotificationContentFromDate:(id)a0 bundle:(id)a1;
+ (id)obcEngagedContentWithDeadline:(id)a0 toppingOff:(BOOL)a1;
+ (id)obcEngagedRequestWithDeadline:(id)a0 isToppingOff:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)removeAllNotifications;
- (void)resetAll;
- (id)currentOBCEngagedNotification;
- (void)updateOBCEngagedNotificationWithDate:(id)a0;
- (id)postOBCEngagedNotificationWithDate:(id)a0;
- (id)postOBCEngagedTopOffNotificationWithDate:(id)a0;
- (id)postNotificationWithRequest:(id)a0;
- (id)getDeliveredNotifications;
- (id)postCECEngagedNotificationWithDate:(id)a0;
- (id)postCECFirstTimeNotification;
- (void)removeCECPausedNotification;
- (void)removeCECNotifications;
- (BOOL)internalCECNotificationsDisabled;
- (void)postInternalCECNotificationForChargingDates:(id)a0;
- (id)postInternalCECNotificationWithID:(id)a0 chargingStatus:(BOOL)a1 information:(id)a2 shouldReplace:(BOOL)a3;
- (id)postInternalChargingIntelligenceNotification:(id)a0 chargingStatus:(BOOL)a1 information:(id)a2 url:(id)a3 validUntil:(id)a4;
- (void)cancelNotificationRequestWithIdentifier:(id)a0;

@end
