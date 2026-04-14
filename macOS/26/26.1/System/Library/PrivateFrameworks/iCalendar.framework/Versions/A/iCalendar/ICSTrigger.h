@interface ICSTrigger : ICSProperty

- (id)initWithDate:(id)a0;
- (void)setDate:(id)a0;
- (id)initWithDuration:(id)a0;
- (void)fixAlarmTrigger;
- (id)initWithDuration:(id)a0 travelRelativeDuration:(id)a1;
- (BOOL)isDurationBased;
- (id)travelRelativeDuration;
- (void)setDuration:(id)a0;

@end
