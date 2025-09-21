@interface ICOperationQueueObserver : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ queueObservation;
    void /* unknown type, empty encoding */ observationsLock;
    void /* unknown type, empty encoding */ logger;
}

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
