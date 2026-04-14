@class NSError, CLSPublicEventServerVersion;

@interface CLSPublicEventGeoServiceClient : NSObject <CLSPublicEventServiceClientProtocol>

@property (nonatomic, readonly) long long maximumBatchSize;

- (id)queryContext;
- (id)init;
- (id)publicEventQueryHelperWithTimeLocationTuples:(id)a0 queryRadius:(double)a1 queryContext:(id)a2 simulatesTimeout:(BOOL)a3;
- (void)serverVersionWithCompletionBlock:(void (^)(CLSPublicEventServerVersion *, NSError *))a0;

@end
