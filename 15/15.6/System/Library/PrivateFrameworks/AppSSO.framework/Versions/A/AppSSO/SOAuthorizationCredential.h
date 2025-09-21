@class NSHTTPURLResponse, NSDictionary, NSData, NSArray;

@interface SOAuthorizationCredential : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *httpAuthorizationHeaders;
@property (copy, nonatomic) NSHTTPURLResponse *httpResponse;
@property (retain, nonatomic) NSData *httpBody;
@property (retain, nonatomic) NSArray *secKeyProxyEndpoints;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAuthorizationResult:(id)a0;

@end
