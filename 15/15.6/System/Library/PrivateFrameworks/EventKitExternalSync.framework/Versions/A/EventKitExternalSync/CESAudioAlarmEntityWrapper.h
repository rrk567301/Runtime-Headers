@interface CESAudioAlarmEntityWrapper : CESAlarmEntityWrapper

+ (id)defaultWrapper;

- (id)entityName;
- (id)fullName;
- (char)alarmMatchesClassType:(id)a0;

@end
