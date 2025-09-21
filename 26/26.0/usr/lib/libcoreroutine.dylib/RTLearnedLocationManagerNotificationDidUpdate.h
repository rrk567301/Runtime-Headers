@interface RTLearnedLocationManagerNotificationDidUpdate : RTNotification

@property (nonatomic) double intervalSinceLastUpdate;
@property (nonatomic) unsigned long long trainMode;
@property (nonatomic) unsigned long long trainResult;

- (id)description;
- (id)initWithIntervalSinceLastUpdate:(double)a0 trainMode:(unsigned long long)a1 trainResult:(unsigned long long)a2;

@end
