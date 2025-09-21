@class LNDeferredLocalizedString;

@interface LNBasicDialog : LNDialog <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) LNDeferredLocalizedString *fullString;
@property (readonly, copy, nonatomic) LNDeferredLocalizedString *supportingString;
@property (readonly, copy, nonatomic) LNDeferredLocalizedString *printedString;
@property (readonly, copy, nonatomic) LNDeferredLocalizedString *spokenString;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFullString:(id)a0 supportingString:(id)a1 localeIdentifier:(id)a2;
- (id)initWithPrintedString:(id)a0 spokenString:(id)a1 localeIdentifier:(id)a2;

@end
