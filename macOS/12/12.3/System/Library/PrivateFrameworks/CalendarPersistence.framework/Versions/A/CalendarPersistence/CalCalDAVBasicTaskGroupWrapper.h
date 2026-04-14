@class NSString;

@interface CalCalDAVBasicTaskGroupWrapper : CalCalDAVSynchronousTaskGroup <CoreDAVTaskGroupDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)taskGroup:(id)a0 didFinishWithError:(id)a1;

@end
