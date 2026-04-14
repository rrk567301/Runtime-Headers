@class NSDictionary;

@interface LNStaticDeferredLocalizedStringWithAlternatives : LNStaticDeferredLocalizedString

@property (readonly, copy, nonatomic) NSDictionary *alternatives;

+ (BOOL)supportsSecureCoding;

- (id)defaultValue;
- (id)bundleURL;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (id)description;
- (id)key;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)table;
- (id)initWithKey:(id)a0 defaultValue:(id)a1 table:(id)a2 bundleURL:(id)a3 alternatives:(id)a4;
- (id)initWithLocalizedStringResource:(id)a0 alternatives:(id)a1;
- (id)localizedStringForLocaleIdentifier:(id)a0 kind:(id)a1;

@end
