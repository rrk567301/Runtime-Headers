@class NSDictionary, NSError;
@protocol CLSQueryProtocol;

@interface CLSPublicEventShazamQuery : NSObject <CLSPublicEventQueryProtocol> {
    void /* unknown type, empty encoding */ logger;
    void /* function */ invalidationTokens;
    void /* unknown type, empty encoding */ internalResolvedPublicEventsByTimeLocationTupleIdentifier;
    void /* unknown type, empty encoding */ unresolvedRequestByRequestIdentifier;
    void /* unknown type, empty encoding */ timeLocationTupleByRequestIdentifier;
    void /* unknown type, empty encoding */ radius;
    void /* unknown type, empty encoding */ service;
}

@property (nonatomic, readonly) NSDictionary *invalidationTokens;
@property (nonatomic, readonly) NSDictionary *resolvedPublicEventsByTimeLocationTupleIdentifier;

- (void)submitWithHandler:(void (^)(id<CLSQueryProtocol>, NSError *))a0;
- (BOOL)isCancelled;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)prepareForRetry;
- (id)initWithTimeLocationTuples:(id)a0 radius:(double)a1 queryContext:(id)a2;

@end
