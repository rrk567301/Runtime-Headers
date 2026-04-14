@interface CUIKAvailabilityDescriptionGenerator : NSObject

+ (id)weekdayMonthDayString:(id)a0;
+ (id)timeRangeStringWithStartDate:(id)a0 withEndDate:(id)a1;
+ (id)youProposedString;
+ (id)allInviteesCanAttendString;
+ (id)showMoreString;
+ (id)proposeANewTimePlaceholderString;
+ (id)failedString;
+ (id)someInviteesCanAttendString;
+ (id)attendeeProposedANewTime:(id)a0 attendeeName:(id)a1;
+ (id)attendeesWhoCanNotAttendeeStringWithBusyStatusIcon:(id)a0 withAttendeeList:(id)a1;
+ (id)waitingForAvailabilityQueryString;

@end
