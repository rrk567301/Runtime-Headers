@interface AMSRemoteSignInRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ authenticationResults;
    void /* unknown type, empty encoding */ signInContext;
    void /* unknown type, empty encoding */ serviceTypes;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
