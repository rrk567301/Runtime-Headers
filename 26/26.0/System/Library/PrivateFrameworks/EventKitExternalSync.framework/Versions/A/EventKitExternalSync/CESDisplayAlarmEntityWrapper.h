@interface CESDisplayAlarmEntityWrapper : CESAlarmEntityWrapper

+ (id)defaultWrapper;

- (id)fullName;
- (id)entityName;
- (BOOL)alarmMatchesClassType:(id)a0;

@end
