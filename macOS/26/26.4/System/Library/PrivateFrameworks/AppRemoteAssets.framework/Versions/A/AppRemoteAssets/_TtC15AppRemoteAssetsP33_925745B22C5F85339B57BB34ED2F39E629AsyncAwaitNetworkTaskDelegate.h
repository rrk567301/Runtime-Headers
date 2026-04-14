@interface _TtC15AppRemoteAssetsP33_925745B22C5F85339B57BB34ED2F39E629AsyncAwaitNetworkTaskDelegate : NSObject <NSURLSessionTaskDelegate> {
    void /* unknown type, empty encoding */ taskDescription;
    void /* unknown type, empty encoding */ prefersIncrementalDelivery;
    void /* unknown type, empty encoding */ priority;
    void /* unknown type, empty encoding */ downloadProgressHandler;
    void /* unknown type, empty encoding */ progressObservation;
    void /* unknown type, empty encoding */ lockedMetrics;
}

- (void)URLSession:(id)a0 didCreateTask:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;

@end
