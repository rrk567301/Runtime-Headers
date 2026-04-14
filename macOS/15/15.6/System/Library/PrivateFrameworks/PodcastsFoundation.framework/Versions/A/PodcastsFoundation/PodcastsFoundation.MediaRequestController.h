@interface PodcastsFoundation.MediaRequestController : IMBaseStoreService <IMBaseStoreServiceDelegate> {
    void /* unknown type, empty encoding */ responseQueue;
    void /* unknown type, empty encoding */ cachePolicy;
    void /* unknown type, empty encoding */ requestTelemetry;
}

- (id)init;
- (void).cxx_destruct;
- (void)baseStoreService:(id)a0 didBeginEncoding:(id)a1;
- (void)baseStoreService:(id)a0 didBeginNetworking:(id)a1;
- (void)baseStoreService:(id)a0 didEndEncoding:(id)a1 withError:(id)a2;
- (void)baseStoreService:(id)a0 didEndNetworking:(id)a1 withError:(id)a2;
- (id)initWithConcurrentOperationCount:(long long)a0 requestEncodingType:(unsigned long long)a1;

@end
