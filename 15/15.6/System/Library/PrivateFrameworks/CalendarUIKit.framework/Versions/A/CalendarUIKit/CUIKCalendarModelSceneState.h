@interface CUIKCalendarModelSceneState : NSObject

@property (nonatomic) char showDayAsList;
@property (nonatomic) long long numDaysToShow;
@property (nonatomic) char showMonthAsDivided;
@property (nonatomic) double dayViewHourScale;
@property (nonatomic) double weekViewHourScale;
@property (nonatomic) int dayViewFirstVisibleSecond;
@property (nonatomic) long long weekViewFirstVisibleSecond;
@property (nonatomic) long long lastUsedNonYearView;

- (id)init;

@end
