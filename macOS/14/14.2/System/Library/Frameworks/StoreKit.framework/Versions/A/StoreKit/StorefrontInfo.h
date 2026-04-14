@class NSString, NSLocale;

@interface StorefrontInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;
@property (readonly) NSString *countryCode;
@property (readonly) NSLocale *locale;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 countryCode:(id)a1 locale:(id)a2;

@end
