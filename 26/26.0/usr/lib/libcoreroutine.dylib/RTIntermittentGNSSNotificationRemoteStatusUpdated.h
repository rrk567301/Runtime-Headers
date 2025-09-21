@interface RTIntermittentGNSSNotificationRemoteStatusUpdated : RTNotification

@property (readonly, nonatomic) long long remoteStatus;

- (id)init;
- (id)initWithRemoteStatus:(long long)a0;

@end
