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
+ (id)chargeLimitRecommendationContentWithLimit:(unsigned long long)a0;
+ (id)chargeLimitRecommendationRequestWithLimit:(unsigned long long)a0;
+ (id)chargingAdviceNotificationContent;
+ (id)chargingAdviceNotificationRequest;
+ (id)fullChargeDeadlineStringFromDate:(id)a0;
+ (id)lowRuntimeNotificationContent;
+ (id)lowRuntimeNotificationRequest;
+ (id)obcEngagedContentWithDeadline:(id)a0 toppingOff:(BOOL)a1;
+ (id)obcEngagedRequestWithDeadline:(id)a0 isToppingOff:(BOOL)a1;
+ (id)pausedNotificationContentFromDate:(id)a0 bundle:(id)a1;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)postInternalChargingIntelligenceNotificationWithChargingStatus:(BOOL)a0 information:(id)a1 url:(id)a2 validUntil:(id)a3;
- (id)postOBCEngagedNotificationWithDate:(id)a0;
- (id)postLowRuntimeNotification;
- (id)postNotificationWithRequest:(id)a0;
- (id)postChargingAdviceNotification;
- (id)postInternalCECNotificationWithID:(id)a0 chargingStatus:(BOOL)a1 information:(id)a2 shouldReplace:(BOOL)a3;
- (id)currentOBCEngagedNotification;
- (void)updateOBCEngagedNotificationWithDate:(id)a0;
- (id)contentForInternalDurationPredictionWithDuration:(double)a0 withConfidence:(double)a1;
- (void)postInternalChargeDurationNotificationWithDuration:(double)a0 withConfidence:(double)a1;
- (id)getDeliveredNotifications;
- (id)postCECEngagedNotificationWithDate:(id)a0;
- (void)postInternalNotificationAtDate:(id)a0 withTitle:(id)a1 withTextContent:(id)a2 icon:(id)a3 url:(id)a4 expirationDate:(id)a5;
- (BOOL)internalCECNotificationsDisabled;
- (void).cxx_destruct;
- (void)removeAllNotifications;
- (id)postOBCEngagedTopOffNotificationWithDate:(id)a0;
- (void)removeCECNotifications;
- (id)postCECFirstTimeNotification;
- (id)postChargeLimitRecommendationWithLimit:(unsigned long long)a0;
- (void)postInternalCECNotificationForChargingDates:(id)a0;
- (void)resetAll;
- (void)removeCECPausedNotification;
- (id)init;

@end
