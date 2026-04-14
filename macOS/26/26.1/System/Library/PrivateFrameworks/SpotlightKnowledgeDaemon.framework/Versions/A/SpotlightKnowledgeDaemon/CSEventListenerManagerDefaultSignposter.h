@class NSString;

@interface CSEventListenerManagerDefaultSignposter : NSObject <CSEventListenerManagerSignposter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)beginProcessJournalsInterval;
- (void)endProcessJournalsIntervalWithSignpostID:(unsigned long long)a0 stopReason:(id)a1 indexType:(int)a2 taskName:(id)a3 processedJournalsCount:(unsigned long long)a4 journalQueueCount:(unsigned long long)a5;

@end
