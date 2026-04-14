@class LNStaticDeferredLocalizedString;

@interface LNLocalizedStringResourceDialog : LNDialog <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *fullString;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *supportingString;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFullString:(id)a0 supportingString:(id)a1 localeIdentifier:(id)a2;

@end
