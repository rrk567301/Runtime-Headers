@class NSString, NSRunLoop;

@interface CalCalDAVTaskManager : CalTaskManager <CoreDAVTaskManager>

@property (retain, nonatomic) NSRunLoop *workRunLoop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submitQueuedCoreDAVTask:(id)a0;
- (void)submitIndependentCoreDAVTask:(id)a0;
- (void)coreDAVTaskRequestModal:(id)a0;
- (void)coreDAVTaskEndModal:(id)a0;
- (void)coreDAVTaskDidFinish:(id)a0;

@end
