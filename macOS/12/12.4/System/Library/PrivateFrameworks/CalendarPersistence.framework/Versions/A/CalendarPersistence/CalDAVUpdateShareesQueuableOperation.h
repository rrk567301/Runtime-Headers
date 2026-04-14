@class NSMutableSet;

@interface CalDAVUpdateShareesQueuableOperation : CalDAVCalendarQueueableOperation

@property (retain) NSMutableSet *shareesToUpdate;
@property (retain) NSMutableSet *shareesToRemove;

+ (void)resendInvitationsForSharees:(id)a0 withCalendarObjectIDString:(id)a1;

- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithChangeRequest:(id)a0 andSession:(id)a1;
- (BOOL)updateOperationWithChangeRequest:(id)a0;
- (id)initWithSession:(id)a0 andCalendar:(id)a1;
- (id)_deletedCalDAVCalendarServerUserItemFromAddress:(id)a0;

@end
