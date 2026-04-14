@class NSDate, NSString, NSArray, NSURL, CSKLoadRange, OSLogEventStream, CSKStreamArchiveStatistics, NSObject, NSTimeZone, NSProgress;
@protocol OS_dispatch_queue;

@interface CSKStreamArchiveSource : CSKStreamSource <CSKStreamSourceTiming>

@property (retain) NSObject<OS_dispatch_queue> *resumeQueue;
@property unsigned long long resumeCount;
@property BOOL invalidated;
@property (retain) NSObject<OS_dispatch_queue> *streamQueue;
@property (retain) NSArray *streams;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSTimeZone *streamStartTimeZone;
@property (retain, nonatomic) NSTimeZone *streamEndTimeZone;
@property (retain, nonatomic) NSProgress *loadingProgress;
@property (retain) OSLogEventStream *eventCountStream;
@property (readonly, nonatomic) NSURL *archiveURL;
@property (readonly, nonatomic) CSKStreamArchiveStatistics *processStatistics;
@property (nonatomic) BOOL ignoresStatistics;
@property (copy) CSKLoadRange *loadRange;
@property (copy) CSKLoadRange *maxLoadRange;
@property (copy) CSKLoadRange *currentLoadRange;
@property (readonly) NSArray *availableLoadRanges;
@property unsigned long long loadingStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)_invalidate;
- (void)stop;
- (id)initWithArchiveURL:(id)a0;
- (void)_updateStartDateAndTimezone;
- (void)_updateEndDateAndTimezone;
- (void)eventCountwithHandler:(id /* block */)a0;
- (id)_eventsForConcurrentExecutions:(unsigned long long)a0;
- (void)_eventSourceWithHandler:(id /* block */)a0;
- (id)_streamEntitiesFromSource:(id)a0 number:(unsigned long long)a1 of:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)incrementProgressWithCount:(long long)a0;

@end
