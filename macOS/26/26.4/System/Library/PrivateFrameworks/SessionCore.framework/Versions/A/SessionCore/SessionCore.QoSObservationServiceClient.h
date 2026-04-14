@interface SessionCore.QoSObservationServiceClient : NSObject <ACActivityQoSObservationXPCServer> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ _lock_bufferedQoSUpdate;
    void /* unknown type, empty encoding */ _lock_pendingAck;
    void /* unknown type, empty encoding */ _lock_predicate;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)subscribeToActivityQoSMatchingPredicate:(id)a0 error:(id *)a1;

@end
