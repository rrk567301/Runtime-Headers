@class OSLogEventStreamBase, OSLogEventStream;

@interface CSKLogarchiveLogEventStream : NSObject <CSKLogEventStream> {
    OSLogEventStream *_logEventStream;
}

@property (readonly, nonatomic) OSLogEventStreamBase *baseStream;

- (void)activateStreamFromDate:(id)a0;
- (void).cxx_destruct;
- (id)initWithLogEventStream:(id)a0;

@end
