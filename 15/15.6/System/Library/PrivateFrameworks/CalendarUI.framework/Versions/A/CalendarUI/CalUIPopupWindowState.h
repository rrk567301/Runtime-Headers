@class NSMutableArray;

@interface CalUIPopupWindowState : NSObject

@property long long frequencySelectorValue;
@property long long dailyIntervalValue;
@property long long weeklyIntervalValue;
@property unsigned short weeklyDayButtons;
@property long long monthlyIntervalValue;
@property (retain) NSMutableArray *monthlyDayButtons;
@property char allowsMultipleMonthlyDayButtons;
@property int monthlyRuleType;
@property int monthlyOrdinalValue;
@property int monthlyOrdinalDayValue;
@property long long yearlyIntervalValue;
@property char allowsYearlyIntervalChange;
@property (retain) NSMutableArray *yearlyMonthButtons;
@property char allowsMultipleYearlyMonthButtons;
@property char yearlyByDaySwitch;
@property int yearlyOrdinalValue;
@property int yearlyOrdinalDayValue;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
