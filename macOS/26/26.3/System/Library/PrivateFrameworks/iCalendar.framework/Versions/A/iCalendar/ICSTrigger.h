@interface ICSTrigger : ICSProperty

- (BOOL)isDurationBased;
- (id)travelRelativeDuration;
- (void)fixAlarmTrigger;
- (id)initWithDuration:(id)a0 travelRelativeDuration:(id)a1;
- (id)initWithDuration:(id)a0;
- (id)initWithDate:(id)a0;
- (void)setDuration:(id)a0;
- (void)setDate:(id)a0;

@end
