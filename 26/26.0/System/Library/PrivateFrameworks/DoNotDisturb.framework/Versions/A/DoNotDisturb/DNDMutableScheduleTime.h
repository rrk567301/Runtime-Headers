@interface DNDMutableScheduleTime : DNDScheduleTime

@property unsigned long long hour;
@property unsigned long long minute;

- (void)setMinute:(unsigned long long)a0;
- (void)setHour:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
