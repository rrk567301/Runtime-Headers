@class NSXPCConnection;

@interface _PSHandleRanker : NSObject {
    NSXPCConnection *_connection;
}

- (id)init;
- (id)rankedHandlesFromCandidateHandles:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
