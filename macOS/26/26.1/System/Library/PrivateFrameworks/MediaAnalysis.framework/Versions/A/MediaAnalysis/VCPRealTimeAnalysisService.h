@class NSLock, NSXPCConnection;

@interface VCPRealTimeAnalysisService : NSObject <VCPRealTimeAnalysisClientProtocol> {
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
}

+ (id)analysisService;
+ (id)errorWithStatus:(int)a0 andDescription:(id)a1;

- (id)connection;
- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)requestAnalysis:(unsigned long long)a0 ofPixelBuffer:(struct __CVBuffer { } *)a1 withProperties:(id)a2 withCompletionHandler:(id /* block */)a3;

@end
