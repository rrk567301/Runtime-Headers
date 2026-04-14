@class LNDeferredLocalizedString;

@interface LNBasicDialog : LNDialog <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNDeferredLocalizedString *fullString;
@property (readonly, copy, nonatomic) LNDeferredLocalizedString *supportingString;
@property (readonly, copy, nonatomic) LNDeferredLocalizedString *printedString;
@property (readonly, copy, nonatomic) LNDeferredLocalizedString *spokenString;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithFullString:(id)a0 supportingString:(id)a1 localeIdentifier:(id)a2;
- (id)initWithPrintedString:(id)a0 spokenString:(id)a1 localeIdentifier:(id)a2;

@end
