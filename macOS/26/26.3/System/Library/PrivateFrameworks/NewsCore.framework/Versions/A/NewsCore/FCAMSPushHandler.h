@class NFLazy;

@interface FCAMSPushHandler : NSObject

@property (retain, nonatomic) NFLazy *lazyHandler;

- (void)handleNotificationResponse:(id)a0;
- (id)init;
- (BOOL)shouldHandleNotification:(id)a0;
- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldHandleNotificationResponse:(id)a0;

@end
