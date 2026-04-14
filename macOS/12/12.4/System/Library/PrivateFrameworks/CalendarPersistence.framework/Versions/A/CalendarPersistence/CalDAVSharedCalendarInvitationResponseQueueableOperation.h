@class CalDAVReplyToSharedCalendarInvitationTaskGroup, NSString, NSData, NSURL;

@interface CalDAVSharedCalendarInvitationResponseQueueableOperation : CalDAVPersistentQueueableOperation <CoreDAVTaskGroupDelegate> {
    int _response;
}

@property (retain) CalDAVReplyToSharedCalendarInvitationTaskGroup *taskGroup;
@property (retain) NSData *invitation;
@property (retain) NSURL *calendarHomeURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performOperation;
- (void)taskGroup:(id)a0 didFinishWithError:(id)a1;
- (id)initWithChangeRequest:(id)a0 forSession:(id)a1;
- (void)useCoreDAV;
- (id)_originalManagedMessageInNewContext;

@end
