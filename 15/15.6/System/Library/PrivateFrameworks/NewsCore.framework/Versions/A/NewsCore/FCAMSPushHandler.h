@class NFLazy;

@interface FCAMSPushHandler : NSObject

@property (retain, nonatomic) NFLazy *lazyHandler;

- (id)init;
- (void).cxx_destruct;
- (void)handleNotification:(id)a0;
- (void)handleNotificationResponse:(id)a0;
- (char)shouldHandleNotification:(id)a0;
- (char)shouldHandleNotificationResponse:(id)a0;

@end
