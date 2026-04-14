@interface EventOccurrenceModelProtocol_Shared : NSObject

+ (BOOL)isSignificantlyDetachedForEvent:(id)a0;
+ (BOOL)isCalendarOwnerInvitedAttendeeForOccurrence:(id)a0 inCalendar:(id)a1;
+ (BOOL)isCurrentUserInvitedAttendeeForOccurrence:(id)a0 inCalendar:(id)a1;
+ (id)durationForEvent:(id)a0;
+ (BOOL)isSignificantlyDetachedForEvent:(id)a0 comparedToMaster:(id)a1;
+ (BOOL)isSignificantlyDetachedIgnoringParticipationForEvent:(id)a0;
+ (BOOL)isSignificantlyDetachedIgnoringParticipationForEvent:(id)a0 comparedToMaster:(id)a1;
+ (BOOL)isCalendarOwnerRepresentedByAttendee:(id)a0 inCalendar:(id)a1;
+ (BOOL)_isSignificantlyDetachedHelperForEvent:(id)a0 shouldIgnorePartStat:(BOOL)a1 comparedToMaster:(id)a2;
+ (BOOL)_userAddressesRepresentsInvitedAttendee:(id)a0 forOccurrence:(id)a1;
+ (BOOL)_userAddresses:(id)a0 representAttendee:(id)a1;
+ (BOOL)_userAddressesRepresentsInvitedAttendee:(id)a0 forOccurrence:(id)a1 checkEmailAddresses:(BOOL)a2;
+ (id)attendeeForCurrentUserForAttendees:(id)a0 inCalendar:(id)a1;
+ (BOOL)isCalendarOwnerInvitedAttendeeForOccurrence:(id)a0;
+ (BOOL)isCalendarOwnerRepresentedByAttendee:(id)a0 forOccurrence:(id)a1;
+ (BOOL)isCurrentUserInvitedAttendeeForOccurrence:(id)a0;

@end
