@class NSSet, NSString;

@interface CalCalDAVCalendarInfoTaskGroupWrapper : CalCalDAVSynchronousTaskGroup <CoreDAVContainerInfoTaskGroupDelegate>

@property (retain) NSSet *containers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)containerInfoTask:(id)a0 completedWithContainers:(id)a1 error:(id)a2;

@end
