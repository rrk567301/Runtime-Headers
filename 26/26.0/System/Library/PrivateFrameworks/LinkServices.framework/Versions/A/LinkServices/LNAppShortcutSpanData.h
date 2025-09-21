@class LNValue, LNStaticDeferredLocalizedString, NSString, NSArray;

@interface LNAppShortcutSpanData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNValue *value;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *propertyTitle;
@property (readonly, copy, nonatomic) NSString *propertyTitleKey;
@property (readonly, copy, nonatomic) NSString *providerClassName;
@property (readonly, copy, nonatomic) NSString *parameterTypeIdentifier;
@property (readonly, copy, nonatomic) NSArray *synonyms;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 propertyTitle:(id)a1 propertyTitleKey:(id)a2 providerClassName:(id)a3 parameterTypeIdentifier:(id)a4 synonyms:(id)a5;

@end
