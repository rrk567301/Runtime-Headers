@class NSNumber;

@interface CUIKDefaultAlarmPreferences : NSObject

@property (retain, nonatomic) NSNumber *defaultAllDayAlarmOffset;
@property (retain, nonatomic) NSNumber *defaultTimedAlarmOffset;

- (void).cxx_destruct;
- (id)defaultAlarmOffsetForAlarmType:(int)a0 sources:(id)a1;
- (id)defaultBirthdayAlarmOffsetForSources:(id)a0;
- (void)setDefaultAlarmOffset:(id)a0 forAlarmType:(int)a1 sources:(id)a2;

@end
