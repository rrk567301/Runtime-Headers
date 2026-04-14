@interface EKCalendarProtocol_Shared : NSObject

+ (BOOL)allowsContentModifications:(id)a0 rawValue:(BOOL)a1;
+ (unsigned long long)sharingStatus:(id)a0;
+ (long long)typeForCalendar:(id)a0;
+ (id)typeDescription:(long long)a0;
+ (unsigned long long)allowedEntityTypes:(id)a0;
+ (BOOL)isBirthday:(id)a0;
+ (unsigned long long)supportedEventAvailabilities:(id)a0;
+ (BOOL)eligibleForDefaultSchedulingCalendar:(id)a0;
+ (long long)typeFromDescription:(id)a0;

@end
