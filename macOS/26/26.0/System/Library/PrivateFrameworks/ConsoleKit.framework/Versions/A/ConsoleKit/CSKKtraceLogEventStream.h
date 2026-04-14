@class OSLogEventStreamBase, OSLogDeserializedEventStream;

@interface CSKKtraceLogEventStream : NSObject <CSKLogEventStream> {
    OSLogDeserializedEventStream *_deserializedEventStream;
    struct ktrace_file { } *_ktraceFile;
}

@property (readonly, nonatomic) OSLogEventStreamBase *baseStream;

- (void)dealloc;
- (void)activateStreamFromDate:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeserializedEventStream:(id)a0 ktraceFile:(struct ktrace_file { } *)a1;

@end
