@class UNUserNotificationCenter, NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface PowerUIIBLMNotificationManager : NSObject <UNUserNotificationCenterDelegate>

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) UNUserNotificationCenter *unCenter;
@property (nonatomic) int notifyToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)displayIBLMEngagedNotification;
- (void)recordIBLMFirstUserNotificationResponse:(long long)a0;

@end
