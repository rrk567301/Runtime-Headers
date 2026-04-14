@interface ReplicatorCore.StateCaptureServer : NSObject <ReplicatorServices.StateCaptureXPCServer> {
    void /* unknown type, empty encoding */ requestProcessingQueue;
    void /* unknown type, empty encoding */ stateCaptureManager;
    void /* unknown type, empty encoding */ listener;
}

- (id)init;
- (void).cxx_destruct;
- (id)stateFor:(id)a0 error:(id *)a1;
- (id)dataPathAndReturnError:(id *)a0;

@end
