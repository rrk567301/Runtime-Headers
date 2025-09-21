@interface EKFamilyCircleManager : NSObject

+ (void)isFamilyCalendar:(id)a0 completion:(id /* block */)a1;
+ (char)isFamilyCalendar:(id)a0 givenFamilySharees:(id)a1;
+ (char)isFamilyCalendarGivenCalendarSharees:(id)a0 familySharees:(id)a1 isPrimaryAppleAccount:(char)a2;
+ (void)requestFamilyShareesWithCompletion:(id /* block */)a0;

@end
