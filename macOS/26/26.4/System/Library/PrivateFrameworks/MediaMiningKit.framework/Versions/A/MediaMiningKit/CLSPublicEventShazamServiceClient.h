@class NSArray, CLSPublicEventServerVersion, NSError, CLSPublicEventStaleTuplesResult;

@interface CLSPublicEventShazamServiceClient : NSObject <CLSPublicEventServiceClientProtocol>

@property (nonatomic, readonly) long long maximumBatchSize;

- (void).cxx_destruct;
- (id)queryContext;
- (id)init;
- (id)publicEventQueryHelperWithTimeLocationTuples:(id)a0 queryRadius:(double)a1 queryContext:(id)a2 simulatesTimeout:(BOOL)a3;
- (void)serverVersionWithCompletionBlock:(void (^)(CLSPublicEventServerVersion *, NSError *))a0;
- (void)staleTimeLocationTuplesFromTuples:(NSArray *)a0 queryRadius:(double)a1 completionBlock:(void (^)(CLSPublicEventStaleTuplesResult *, NSError *))a2;

@end
