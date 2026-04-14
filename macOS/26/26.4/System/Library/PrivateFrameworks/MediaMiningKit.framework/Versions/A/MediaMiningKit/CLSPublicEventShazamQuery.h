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

- (void)prepareForRetry;
- (void)cancel;
- (void)submitWithHandler:(void (^)(id<CLSQueryProtocol>, NSError *))a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isCancelled;
- (id)initWithTimeLocationTuples:(id)a0 radius:(double)a1 queryContext:(id)a2;

@end
