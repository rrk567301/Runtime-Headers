@class NSArray, NSDictionary;

@interface CUIKSaveOperation : CUIKUserOperation

@property (retain) NSArray *previousObjects;
@property (retain) NSArray *previousSliceInfo;
@property (retain) NSDictionary *objectsRequiringAlteredSpan;

+ (id)multipleEventsChangedActionName;
+ (id)genericEventChangedActionName:(id)a0;
+ (id)changedTimeActionName:(id)a0;
+ (id)changedTitleActionName:(id)a0;
+ (id)changedTimeZoneActionName:(id)a0;
+ (id)changedCalendarActionName:(id)a0;
+ (id)changedAvailablityActionName:(id)a0;
+ (id)changedPrivacyActionName:(id)a0;
+ (id)changedNotesActionName:(id)a0;
+ (id)changedURLActionName:(id)a0;
+ (id)changedParticipationStatusActionName:(id)a0;
+ (id)changedResponseCommentActionName:(id)a0;
+ (id)alarmsAddedActionName:(id)a0;
+ (id)alarmsRemovedActionName:(id)a0;
+ (id)alarmsModifiedActionName:(id)a0;
+ (id)attachmentsAddedActionName:(id)a0;
+ (id)attachmentsRemovedActionName:(id)a0;
+ (id)attachmentsModifiedActionName:(id)a0;
+ (id)attendeesAddedActionName:(id)a0;
+ (id)attendeesRemovedActionName:(id)a0;
+ (id)attendeesModifiedActionName:(id)a0;
+ (id)shareesAddedActionName:(id)a0;
+ (id)shareesRemovedActionName:(id)a0;
+ (id)shareesModifiedActionName:(id)a0;
+ (id)changedAllDayActionNameWithCurrentEvent:(id)a0 previousEvent:(id)a1;
+ (id)changedTravelTimeActionNameWithCurrentEvent:(id)a0 previousEvent:(id)a1;
+ (id)changedRecurrenceRuleActionNameWithCurrentEvent:(id)a0 previousEvent:(id)a1;
+ (id)changedLocationActionNameWithCurrentEvent:(id)a0 previousEvent:(id)a1;
+ (id)changedColorOfCalendar:(id)a0;
+ (id)changedTitleOfCalendar:(id)a0;

- (void).cxx_destruct;
- (id)_actionName;
- (BOOL)_executeWithUndoDelegate:(id)a0 error:(id *)a1;
- (Class)_inverseOperationClass;
- (id)_objectsForInverse;
- (id)_inverseOperation;
- (long long)_spanForObject:(id)a0;
- (void)_storePreviousState;
- (void)_storePreviousObjects;
- (id)_objectsRequiringAlteredSpan:(id)a0;
- (id)_invertedNonSliceObjects;

@end
