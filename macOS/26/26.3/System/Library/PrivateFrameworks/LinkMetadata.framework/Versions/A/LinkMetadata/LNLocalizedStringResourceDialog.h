@class NSString, LNStaticDeferredLocalizedString;

@interface LNLocalizedStringResourceDialog : LNDialog <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *fullString;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *supportingString;
@property (readonly, copy, nonatomic) NSString *systemImageName;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFullString:(id)a0 supportingString:(id)a1 systemImageName:(id)a2 localeIdentifier:(id)a3;

@end
