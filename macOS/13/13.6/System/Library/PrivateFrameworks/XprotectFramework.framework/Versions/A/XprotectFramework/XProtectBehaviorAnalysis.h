@class NSXPCConnection;

@interface XProtectBehaviorAnalysis : NSObject {
    NSXPCConnection *_xpc;
}

- (id)init;
- (void).cxx_destruct;
- (void)beginAnalysisWithHandler:(id /* block */)a0;

@end
