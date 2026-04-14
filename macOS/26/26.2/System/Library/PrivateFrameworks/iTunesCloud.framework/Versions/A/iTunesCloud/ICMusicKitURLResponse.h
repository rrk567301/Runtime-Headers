@class NSString, NSError;

@interface ICMusicKitURLResponse : ICURLResponse

@property (readonly, copy, nonatomic) NSString *serverCorrelationKey;
@property (readonly, copy, nonatomic) NSString *serverEnvironment;
@property (readonly, nonatomic) NSError *serverError;

- (id)initWithURLResponse:(id)a0 urlRequest:(id)a1 bodyData:(id)a2 performanceMetrics:(id)a3;
- (id)_parseServerErrorDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)_initializeMusicKitURLResponse;
- (id)_parseServerError;
- (id)initWithURLResponse:(id)a0 urlRequest:(id)a1 bodyDataURL:(id)a2 performanceMetrics:(id)a3;

@end
