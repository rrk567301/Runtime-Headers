@class NSData;

@interface PKWebServiceRequestMetadata : NSObject

@property (nonatomic) long long retries;
@property (nonatomic) char authHandling;
@property (nonatomic) char cacheResponse;
@property (retain, nonatomic) NSData *originalBody;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSData *responseData;

- (void).cxx_destruct;

@end
