@class NSObject;
@protocol EXSNotificationControllerDelegate;

@interface EXSNotificationController : NSObject

@property (nonatomic) int notificationRegistrationToken;
@property (nonatomic) BOOL hasValidNotificationRegistrationToken;
@property (weak, nonatomic) NSObject<EXSNotificationControllerDelegate> *delegate;

+ (id)log;

- (void).cxx_destruct;
- (id)init;
- (void)stopListeningForNotifications;
- (void)startListeningForNotifications;

@end
