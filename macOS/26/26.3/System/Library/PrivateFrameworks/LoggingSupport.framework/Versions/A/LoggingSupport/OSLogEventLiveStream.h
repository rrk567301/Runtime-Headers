@class OSLogEventLiveSource, _OSLogStreamFilter, NSObject;
@protocol OS_xpc_object;

@interface OSLogEventLiveStream : OSLogEventStreamBase {
    _OSLogStreamFilter *_streamFilter;
    unsigned long long _reason;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *diagdconn;
@property (copy, nonatomic) id /* block */ dropnoteHandler;
@property (readonly, nonatomic) OSLogEventLiveSource *source;

- (void)invalidate;
- (id)initWithLiveSource:(id)a0;
- (void)setFilterPredicate:(id)a0;
- (void)_handleStreamedObject:(id)a0 usingProxy:(id)a1;
- (void)setDroppedEventHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_activateLiveStream;
- (void)activate;

@end
