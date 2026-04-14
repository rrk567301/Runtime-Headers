@class AMSDelegateAuthenticateRequest, NSDictionary, NSString;

@interface AMSDelegateAuthenticateResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) AMSDelegateAuthenticateRequest *request;
@property (readonly) NSDictionary *serverResponse;
@property (readonly) NSString *token;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithServerResponse:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
