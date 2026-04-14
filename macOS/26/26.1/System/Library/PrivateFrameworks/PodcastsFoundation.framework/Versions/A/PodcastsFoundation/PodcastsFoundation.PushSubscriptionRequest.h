@class NSDictionary;

@interface PodcastsFoundation.PushSubscriptionRequest : NSObject {
    void /* unknown type, empty encoding */ endpointURL;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ apnsToken;
}

@property (nonatomic, readonly) NSDictionary *parameters;

- (void).cxx_destruct;
- (id)init;
- (id)buildURLRequestAndReturnError:(id *)a0;
- (id)initWithEndpointURL:(id)a0 action:(id)a1 apnsToken:(id)a2;

@end
