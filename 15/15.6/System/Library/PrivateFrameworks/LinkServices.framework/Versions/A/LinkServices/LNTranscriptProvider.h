@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface LNTranscriptProvider : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)xpcInterface;
+ (id)createStreamsWithStreamURL:(id)a0;
+ (id)publisherForStream:(id)a0 fromDate:(id)a1 toDate:(id)a2 maxEvents:(id)a3 reversed:(char)a4;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)configureConnection:(id)a0;
- (void)deleteRecordsWithMatchingPredicate:(id)a0 reply:(id /* block */)a1;
- (void)donateActionRecordData:(id)a0 writeImmediately:(char)a1 reply:(id /* block */)a2;
- (void)deleteAllRecordsWithReply:(id /* block */)a0;
- (void)donateWithActionRecord:(id)a0 reply:(id /* block */)a1;
- (id)transcriptPublisherFromDate:(id)a0 error:(id *)a1;
- (id)transcriptPublisherFromDate:(id)a0 toDate:(id)a1 maxEvents:(id)a2 reversed:(char)a3 error:(id *)a4;

@end
