@class NSString;

@interface CalCalDAVGetAccountPropertiesTaskWrapper : CalCalDAVSynchronousTaskGroup <CoreDAVGetAccountPropertiesTaskGroupDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getAccountPropertiesTask:(id)a0 completedWithError:(id)a1;

@end
