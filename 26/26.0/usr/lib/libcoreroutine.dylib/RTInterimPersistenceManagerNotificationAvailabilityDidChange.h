@interface RTInterimPersistenceManagerNotificationAvailabilityDidChange : RTNotification

@property (readonly, nonatomic) unsigned long long availability;

- (id)initWithAvailability:(unsigned long long)a0;

@end
