@interface EKOccurrenceProtocol_Shared : NSObject

+ (BOOL)isScheduled:(id)a0;
+ (BOOL)allowsParticipantStatusModifications:(id)a0;
+ (BOOL)isOrganizedBySomeoneElse:(id)a0 forCalendar:(id)a1;
+ (BOOL)isOrganizedByCurrentUser:(id)a0;
+ (BOOL)isOrganizedBySharedCalendarOwner:(id)a0;
+ (BOOL)isOrganizedBySomeoneElse:(id)a0;
+ (BOOL)_isOrganizedByCurrentUser:(id)a0 forCalendar:(id)a1;
+ (BOOL)_isOrganizedBySharedCalendarOwner:(id)a0 forCalendar:(id)a1;

@end
