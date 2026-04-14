@class NSString, NSURL;

@interface CalDAVDeleteEntityQueueableOperation : CalDAVEntityQueueableOperation <CoreDAVDeleteTaskDelegate> {
    NSURL *_calendarURL;
}

@property (retain) NSString *eTag;
@property (retain) NSString *scheduleTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)enqueue;
- (id)readableDescription;
- (id)initWithChangeRequest:(id)a0 calendarURL:(id)a1 fromSource:(id)a2;
- (void)deleteTask:(id)a0 completedWithError:(id)a1;
- (void)performOperation:(BOOL)a0;

@end
