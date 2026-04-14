@interface MSSendLaterContext : NSObject

+ (unsigned long long)contextForCurrentDate;
+ (unsigned long long)contextForDate:(id)a0;
+ (BOOL)shouldShowSendLaterDisclaimerAlertForContext:(unsigned long long)a0;
+ (id)titleAndDateForSendLaterContext:(unsigned long long)a0;
+ (id)_nextMondayMorning;
+ (id)_configuredTitleForFormat:(id)a0 date:(id)a1;

@end
