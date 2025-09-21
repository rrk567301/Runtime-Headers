@interface RTLearnedLocationManagerNotificationAvailabilityDidChange : RTNotification

@property (readonly, nonatomic) char available;

- (id)description;
- (id)initWithAvailability:(char)a0;

@end
