@class NSMutableDictionary, NSDictionary, CalDAVFreeBusyLookupTask, CalDateRange;

@interface CalDAVLookupFreeBusyOperation : CalSingleSynchronousTask {
    CalDAVFreeBusyLookupTask *_task;
    CalDateRange *_timeRange;
}

@property (readonly) NSDictionary *freeBusySpans;
@property (readonly) NSMutableDictionary *userEventArrays;

- (void).cxx_destruct;
- (id)initWithPrincipal:(id)a0 timeRange:(id)a1 attendees:(id)a2 maskingEventSharedUid:(id)a3;
- (BOOL)executeSynchronouslyWithError:(id *)a0;

@end
