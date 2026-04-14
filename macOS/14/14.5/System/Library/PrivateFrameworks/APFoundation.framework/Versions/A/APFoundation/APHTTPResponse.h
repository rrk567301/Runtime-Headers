@class NSHTTPURLResponse, NSDictionary, NSData, NSError, APHTTPRequest;

@interface APHTTPResponse : NSObject

@property (nonatomic) long long responseStatusCode;
@property (retain, nonatomic) APHTTPRequest *originalRequest;
@property (retain, nonatomic) NSError *responseError;
@property (retain, nonatomic) NSHTTPURLResponse *URLResponse;
@property (retain, nonatomic) NSDictionary *responseHeaders;
@property (retain, nonatomic) NSData *responseBody;

- (id)init;
- (void).cxx_destruct;
- (BOOL)valid;
- (id)_initWithRequest:(id)a0 responseData:(id)a1 URLResponse:(id)a2 error:(id)a3;
- (id)valueForResponseHeaderField:(id)a0;

@end
