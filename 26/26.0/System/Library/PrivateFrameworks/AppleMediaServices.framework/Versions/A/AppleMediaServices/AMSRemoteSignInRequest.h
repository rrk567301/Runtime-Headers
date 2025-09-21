@interface AMSRemoteSignInRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ authenticationResults;
    void /* unknown type, empty encoding */ signInContext;
    void /* unknown type, empty encoding */ serviceTypes;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
