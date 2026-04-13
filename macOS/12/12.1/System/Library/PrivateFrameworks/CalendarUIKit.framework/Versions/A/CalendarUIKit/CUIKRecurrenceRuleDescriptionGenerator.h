@interface CUIKRecurrenceRuleDescriptionGenerator : CUIKDescriptionGenerator

+ (long long)daysTypeForDayArray:(id)a0;
+ (id)_andDaysOfWeekString:(id)a0;
+ (id)_weekDayPositionAsString:(long long)a0;
+ (id)_orDaysOfWeekString:(id)a0;
+ (id)_dayOfMonthAsString:(long long)a0;
+ (id)_numberedWeekDayString:(id)a0;
+ (id)_daysOfWeek;
+ (id)_customDayCombinationDescription:(id)a0;
+ (id)localizedOfMonthStringForMonth:(id)a0;

- (id)naturalLanguageDescriptionForRecurrenceRule:(id)a0 withStartDate:(id)a1;

@end
