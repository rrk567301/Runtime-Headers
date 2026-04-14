@class NSMutableArray;

@interface CalUIPopupWindowState : NSObject

@property long long frequencySelectorValue;
@property long long dailyIntervalValue;
@property long long weeklyIntervalValue;
@property unsigned short weeklyDayButtons;
@property long long monthlyIntervalValue;
@property (retain) NSMutableArray *monthlyDayButtons;
@property BOOL allowsMultipleMonthlyDayButtons;
@property int monthlyRuleType;
@property int monthlyOrdinalValue;
@property int monthlyOrdinalDayValue;
@property long long yearlyIntervalValue;
@property BOOL allowsYearlyIntervalChange;
@property (retain) NSMutableArray *yearlyMonthButtons;
@property BOOL allowsMultipleYearlyMonthButtons;
@property BOOL yearlyByDaySwitch;
@property int yearlyOrdinalValue;
@property int yearlyOrdinalDayValue;

- (id)description;
- (void)reset;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
