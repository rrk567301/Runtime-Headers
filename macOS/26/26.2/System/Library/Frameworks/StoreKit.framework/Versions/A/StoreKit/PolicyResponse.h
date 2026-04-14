@class NSString, NSURL;

@interface PolicyResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *termsOfService;
@property (readonly) NSString *privacyPolicyText;
@property (readonly) NSURL *privacyPolicyURL;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTermsOfService:(id)a0 privacyPolicyText:(id)a1 privacyPolicyURL:(id)a2;

@end
