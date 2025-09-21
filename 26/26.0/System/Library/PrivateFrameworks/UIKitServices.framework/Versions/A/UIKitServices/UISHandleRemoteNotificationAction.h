@interface UISHandleRemoteNotificationAction : BSAction

- (id)action;
- (id)initWithRemoteNotificationPayload:(id)a0 action:(id)a1 withHandler:(id /* block */)a2;
- (id)payload;
- (id)userResponse;
- (unsigned long long)UIActionType;
- (id)initWithRemoteNotificationPayload:(id)a0 action:(id)a1 userResponse:(id)a2 withHandler:(id /* block */)a3;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void)sendResponse:(id)a0;
- (id)initWithRemoteNotificationPayload:(id)a0 withHandler:(id /* block */)a1;
- (id)_initWithRemoteNotificationPayload:(id)a0 action:(id)a1 userResponse:(id)a2 type:(unsigned long long)a3 withHandler:(id /* block */)a4;

@end
