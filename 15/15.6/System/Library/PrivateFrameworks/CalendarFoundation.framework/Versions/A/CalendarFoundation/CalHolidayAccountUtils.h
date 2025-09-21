@interface CalHolidayAccountUtils : NSObject

+ (id)logHandle;
+ (id)_createUnsavedHolidayAccountWithAccountStore:(id)a0;
+ (id)_holidayAccountWithAccountStore:(id)a0;
+ (char)_isEnabledWithAccount:(id)a0;
+ (void)ensureHolidayAccountExistsWithAccountStore:(id)a0;
+ (id)holidayAccountDescription;
+ (char)holidayCalendarIsEnabledWithAccountStore:(id)a0;
+ (void)setHolidayCalendarIsEnabled:(char)a0 withAccountStore:(id)a1;

@end
