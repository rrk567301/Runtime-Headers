@class NSHTTPURLResponse;

@interface FAHTTPResponse : NSObject

@property (readonly, nonatomic) NSHTTPURLResponse *HTTPResponse;
@property (readonly, nonatomic) id body;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 body:(id)a1;

@end
