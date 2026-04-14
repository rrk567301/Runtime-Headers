@class NSXPCConnection;

@interface _PSHandleRanker : NSObject {
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)init;
- (id)rankedHandlesFromCandidateHandles:(id)a0;
- (void).cxx_destruct;

@end
