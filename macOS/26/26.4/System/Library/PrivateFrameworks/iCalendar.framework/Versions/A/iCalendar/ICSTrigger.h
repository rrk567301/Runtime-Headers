@interface ICSTrigger : ICSProperty

- (BOOL)isDurationBased;
- (void)setDuration:(id)a0;
- (void)setDate:(id)a0;
- (id)initWithDuration:(id)a0 travelRelativeDuration:(id)a1;
- (id)initWithDate:(id)a0;
- (void)fixAlarmTrigger;
- (id)travelRelativeDuration;
- (id)initWithDuration:(id)a0;

@end
