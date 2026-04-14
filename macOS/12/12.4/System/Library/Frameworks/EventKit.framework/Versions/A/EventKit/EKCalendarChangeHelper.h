@class EKBackingStore;

@interface EKCalendarChangeHelper : NSObject

@property (readonly, weak, nonatomic) EKBackingStore *backingStore;

- (void).cxx_destruct;
- (id)initWithBackingStore:(id)a0;
- (id)doCalendarChangeForItem:(id)a0 error:(id *)a1;
- (id)doCopyEvent:(id)a0 toCalendar:(id)a1 withOptions:(long long)a2 error:(id *)a3;
- (id)_handleCalendarChangeForEvent:(id)a0 fromCalendar:(id)a1 toCalendar:(id)a2 requirements:(long long)a3 copyOptions:(long long)a4 forceCopy:(BOOL)a5 handlingDetached:(BOOL)a6 error:(id *)a7;
- (id)_moveEventHelperDoDuplication:(id)a0 toCalendar:(id)a1 requirements:(long long)a2 additionalOptions:(long long)a3 error:(id *)a4;
- (id)_moveEventHelperDoRecreation:(id)a0 toCalendar:(id)a1 requirements:(long long)a2 error:(id *)a3;
- (void)_moveEventHelperMoveNotifications:(id)a0 toCalendar:(id)a1;
- (id)_moveEventHelperDoAlterations:(id)a0 fromCalendar:(id)a1 toCalendar:(id)a2 requirements:(long long)a3;
- (void)_validateAttendeesForEvent:(id)a0 toCalendar:(id)a1;
- (id)_moveEventHelperDoReinviteAttendees:(id)a0 toCalendar:(id)a1 requirements:(long long)a2;
- (id)_moveEventHelperDoRemoveAttendees:(id)a0 requirements:(long long)a1;
- (BOOL)_moveEventHelperHandleDetachedEvents:(id)a0 fromCalendar:(id)a1 toCalendar:(id)a2 error:(id *)a3;
- (id)_moveEventHelperDoAlterationsToPrivacy:(id)a0 toCalendar:(id)a1;
- (id)_moveEventHelperDoAlterationsToScheduleAgent:(id)a0 fromCalendar:(id)a1 toCalendar:(id)a2 requirements:(long long)a3;
- (id)_moveEventHelperDoAlterationsToAttachments:(id)a0 fromCalendar:(id)a1 toCalendar:(id)a2;
- (void)_moveEventHelperMoveFieldsToNotes:(id)a0 fromCalendar:(id)a1 toCalendar:(id)a2 requirements:(long long)a3;
- (id)_moveEventHelperDoAlterationsToURL:(id)a0 toCalendar:(id)a1 notes:(id)a2;
- (id)_moveEventHelperDoAlterationsToAlarms:(id)a0 toCalendar:(id)a1 notes:(id)a2;
- (id)_moveEventHelperDoAlterationsToRecurrence:(id)a0 toCalendar:(id)a1 notes:(id)a2;
- (id)_moveEventHelperDoAlterationsToTimeZone:(id)a0 toCalendar:(id)a1 notes:(id)a2;

@end
