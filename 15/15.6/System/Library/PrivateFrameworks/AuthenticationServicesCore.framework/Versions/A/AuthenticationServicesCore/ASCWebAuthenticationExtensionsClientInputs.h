@class NSString;

@interface ASCWebAuthenticationExtensionsClientInputs : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) char isGoogleLegacyAppIDSupport;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAppID:(id)a0 isGoogleLegacyAppIDSupport:(char)a1;

@end
