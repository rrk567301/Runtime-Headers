@interface ICURLResponseAuthenticationProvider : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long interactionLevel;

+ (id)defaultProvider;

- (void)performAuthenticationUsingRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)performAuthenticationToHandleResponse:(id)a0 toRequest:(id)a1 withCompletionHandler:(id /* block */)a2;
- (unsigned long long)hash;
- (id)initWithUserInteractionLevel:(long long)a0;
- (BOOL)isEqual:(id)a0;

@end
