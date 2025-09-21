@protocol ASAuthorizationProvider;

@interface ASAuthorizationRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) id<ASAuthorizationProvider> provider;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProvider:(id)a0;
- (char)supportsStyle:(long long)a0;

@end
