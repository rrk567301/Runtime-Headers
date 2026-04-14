@interface ICSTrigger : ICSProperty

- (void)setDate:(id)a0;
- (id)travelRelativeDuration;
- (void)setDuration:(id)a0;
- (BOOL)isDurationBased;
- (void)fixAlarmTrigger;
- (id)initWithDuration:(id)a0;
- (id)initWithDuration:(id)a0 travelRelativeDuration:(id)a1;
- (id)initWithDate:(id)a0;

@end
