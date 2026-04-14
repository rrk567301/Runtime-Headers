@class NSDictionary;

@interface LNStaticDeferredLocalizedStringWithAlternatives : LNStaticDeferredLocalizedString

@property (readonly, copy, nonatomic) NSDictionary *alternatives;

+ (BOOL)supportsSecureCoding;

- (id)key;
- (id)defaultValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)bundleURL;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)initWithCoder:(id)a0;
- (id)table;
- (id)initWithKey:(id)a0 defaultValue:(id)a1 table:(id)a2 bundleURL:(id)a3 alternatives:(id)a4;
- (id)initWithLocalizedStringResource:(id)a0 alternatives:(id)a1;
- (id)localizedStringForLocaleIdentifier:(id)a0 kind:(id)a1;

@end
