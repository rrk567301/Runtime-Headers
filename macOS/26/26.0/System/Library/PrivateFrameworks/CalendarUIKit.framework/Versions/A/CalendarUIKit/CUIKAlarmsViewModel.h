@class EKCalendarItem, NSMutableArray;

@interface CUIKAlarmsViewModel : NSObject {
    BOOL _canHaveLeaveNowAlarm;
    BOOL _hasLeaveNowAlarm;
    unsigned long long _locationStatus;
}

@property (retain, nonatomic) EKCalendarItem *calendarItem;
@property (retain, nonatomic) NSMutableArray *uiAlarms;
@property (nonatomic) BOOL needsUpdate;
@property (readonly, nonatomic) BOOL canHaveLeaveNowAlarm;
@property (readonly, nonatomic) BOOL hasLeaveNowAlarm;
@property (readonly, nonatomic) unsigned long long locationStatus;

+ (id)accessibilityIdentifierForIndex:(unsigned long long)a0;
+ (id)labelTextForIndex:(unsigned long long)a0;
+ (void)subscribeToDarwinNotifications;
+ (void)unsubscribeFromDarwinNotifications;

- (void)setNeedsUpdate;
- (void)dealloc;
- (void)_updateAlarms;
- (id)init;
- (void)updateIfNeeded;
- (void).cxx_destruct;
- (void)reloadTTLLocationAuthorization:(id)a0;
- (id)_errorTitleForDisabledTTLAlarm;
- (BOOL)_hasUIAlarmChangedFromUIAlarm:(id)a0 toUIAlarm:(id)a1;
- (void)_updateLeaveNowFlags;
- (id)initWithCalendarItem:(id)a0;
- (BOOL)isAlarmEffectivelyDisabled:(id)a0;
- (BOOL)locationStatusMakesTTLAlarmDisabled;
- (id)presetAlarmsIntervals;
- (BOOL)showDefaultAlarm:(id)a0;
- (void)updatedUIAlarmFromUIAlarm:(id)a0 toUIAlarm:(id)a1 atIndex:(unsigned long long)a2 completion:(id /* block */)a3;

@end
