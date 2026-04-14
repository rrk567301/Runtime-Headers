@class NSXPCConnection;

@interface _PSSiriHandleRanker : NSObject {
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)rankedHandles:(id)a0 context:(id)a1;

@end
