@class CalDAVReportJunkTaskGroup, NSURL, NSString;

@interface CalDAVJunkReportQueueableOperation : CalDAVPersistentQueueableOperation <CoreDAVTaskGroupDelegate>

@property (retain) CalDAVReportJunkTaskGroup *taskGroup;
@property (retain) NSURL *invitationURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
