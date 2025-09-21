@class UNUserNotificationCenter, NSString, NSObject;
@protocol OS_os_log;

@interface _OSINotificationManager : NSObject <UNUserNotificationCenterDelegate>

@property (retain, nonatomic) UNUserNotificationCenter *unCenter;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (id)notificationRequestWith:(id)a0 content:(id)a1;
- (void)postIBLMFirstTimeNotification;
- (void)postNotificationWith:(id)a0 content:(id)a1;

@end
