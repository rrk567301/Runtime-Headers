@interface AMSRemoteSignInRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ authenticationResults;
    void /* unknown type, empty encoding */ signInContext;
    void /* unknown type, empty encoding */ serviceTypes;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
