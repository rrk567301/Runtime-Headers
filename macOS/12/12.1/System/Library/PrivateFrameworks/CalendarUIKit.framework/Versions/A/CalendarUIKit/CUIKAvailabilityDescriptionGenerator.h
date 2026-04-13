@interface CUIKAvailabilityDescriptionGenerator : NSObject

+ (id)attendeeProposedANewTime:(id)a0 attendeeName:(id)a1;
+ (id)waitingForAvailabilityQueryString;
+ (id)showMoreString;
+ (id)youProposedString;
+ (id)proposeANewTimePlaceholderString;
+ (id)weekdayMonthDayString:(id)a0;
+ (id)timeRangeStringWithStartDate:(id)a0 withEndDate:(id)a1;
+ (id)attendeesWhoCanNotAttendeeStringWithBusyStatusIcon:(id)a0 withAttendeeList:(id)a1;
+ (id)allInviteesCanAttendString;
+ (id)someInviteesCanAttendString;

@end
