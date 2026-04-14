@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface HIDRMUIUserAuthorizationManager : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSMutableDictionary *authRequests;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, nonatomic) NSArray *userAuthorizationRequests;

+ (id)sharedManager;
+ (BOOL)shouldShowInternalUI;
+ (BOOL)digitFromCharacter:(unsigned short)a0 digit:(unsigned int *)a1;
+ (id)digitsArrayFromNumber:(id)a0;
+ (void)launchTTRForNotificationType:(long long)a0 andDeviceName:(id)a1;
+ (unsigned int)randomNumberWithDigitCount:(unsigned char)a0;
+ (id)userNotificationForType:(long long)a0 deviceName:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (void)addUserAuthorizationRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)handleInputCharacter:(unsigned short)a0 forUserAuthorizationRequest:(id)a1 error:(id *)a2;
- (BOOL)removeUserAuthorizationRequest:(id)a0 error:(id *)a1;
- (BOOL)removeAllUserAuthorizationRequests:(id *)a0;

@end
