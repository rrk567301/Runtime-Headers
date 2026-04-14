@class NSString;

@interface AMSDelegateAuthenticateRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *challenge;
@property (readonly, copy) NSString *userAgent;

+ (id)preferredUserAgent;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithChallenge:(id)a0;
- (id)initWithChallenge:(id)a0 userAgent:(id)a1;

@end
