@class CalCalDAVTaskManager, CalDAVBasicAccountInfoProvider;

@interface CalCalDAVAuthenticationTask : CalSingleSynchronousTask {
    CalCalDAVTaskManager *_taskManager;
}

@property (retain, nonatomic) CalDAVBasicAccountInfoProvider *accountInfoProvider;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBasicAccountInfoProvider:(id)a0;
- (void)authenticateSynchronously;

@end
