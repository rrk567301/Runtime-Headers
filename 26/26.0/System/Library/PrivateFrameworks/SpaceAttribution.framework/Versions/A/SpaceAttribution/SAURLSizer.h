@class SADaemonXPC, SAReplyController, NSUUID;

@interface SAURLSizer : NSObject

@property (retain) SAReplyController *sarc;
@property (retain) SADaemonXPC *xpcOut;
@property (retain) NSUUID *sizerID;
@property BOOL alreadyObservingURLs;
@property BOOL alreadyReportedXPCError;

- (void)invalidateConnection;
- (void)stopObserving;
- (id)init;
- (void).cxx_destruct;
- (void)callHandlerWithError:(id)a0;
- (void)startObservingURLs:(id)a0 updateHandler:(id /* block */)a1;

@end
