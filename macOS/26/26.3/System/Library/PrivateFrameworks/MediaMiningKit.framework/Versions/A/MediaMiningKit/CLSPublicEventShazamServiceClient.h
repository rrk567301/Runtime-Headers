@class NSError, CLSPublicEventServerVersion;

@interface CLSPublicEventShazamServiceClient : NSObject <CLSPublicEventServiceClientProtocol> {
    void /* unknown type, empty encoding */ logger;
}

@property (nonatomic, readonly) long long maximumBatchSize;

- (id)queryContext;
- (id)init;
- (void).cxx_destruct;
- (id)publicEventQueryHelperWithTimeLocationTuples:(id)a0 queryRadius:(double)a1 queryContext:(id)a2 simulatesTimeout:(BOOL)a3;
- (void)serverVersionWithCompletionBlock:(void (^)(CLSPublicEventServerVersion *, NSError *))a0;

@end
