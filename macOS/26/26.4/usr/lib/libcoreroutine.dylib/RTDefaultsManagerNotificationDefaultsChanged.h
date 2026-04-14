@class NSArray;

@interface RTDefaultsManagerNotificationDefaultsChanged : RTNotification

@property (readonly, nonatomic) NSArray *updatedKeys;

- (id)initWithUpdatedKeys:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
