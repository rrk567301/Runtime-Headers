@interface LNTranscriptPrivilegedProvider : LNTranscriptProvider

@property (class, readonly, nonatomic) LNTranscriptPrivilegedProvider *shared;

+ (id)xpcInterface;

- (id)transcriptPublisherWithStreamName:(id)a0 fromDate:(id)a1 toDate:(id)a2 maxEvents:(id)a3 reversed:(BOOL)a4 error:(id *)a5;
- (id)transcriptPublisherWithStreamName:(id)a0 fromDate:(id)a1 error:(id *)a2;
- (id)appIntentTranscriptPublisherFromDate:(id)a0 error:(id *)a1;
- (id)appIntentTranscriptPublisherFromDate:(id)a0 toDate:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3 error:(id *)a4;
- (void)donateActionRecordData:(id)a0 bundleIdentifier:(id)a1 timestamp:(double)a2 writeImmediately:(BOOL)a3 reply:(id /* block */)a4;
- (id)donatedTranscriptEventsFromDate:(id)a0 error:(id *)a1;
- (id)donatedTranscriptEventsFromDate:(id)a0 toDate:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3 error:(id *)a4;

@end
