@class NSString;

@interface CWANQPNetworkAuthenticationTypeEntry : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long typeIndicator;
@property (copy, nonatomic) NSString *localizedTypeIndicator;
@property (copy, nonatomic) NSString *redirectURL;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTypeIndicator:(long long)a0 redirectURL:(id)a1;

@end
