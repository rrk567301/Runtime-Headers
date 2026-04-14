@class NSDictionary;

@interface LNStaticDeferredLocalizedStringWithAlternatives : LNStaticDeferredLocalizedString

@property (readonly, copy, nonatomic) NSDictionary *alternatives;

+ (BOOL)supportsSecureCoding;

- (id)bundleURL;
- (id)defaultValue;
- (unsigned long long)hash;
- (id)key;
- (id)table;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (Class)classForKeyedArchiver;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithKey:(id)a0 defaultValue:(id)a1 table:(id)a2 bundleURL:(id)a3 alternatives:(id)a4;
- (id)initWithLocalizedStringResource:(id)a0 alternatives:(id)a1;
- (id)localizedStringForLocaleIdentifier:(id)a0 kind:(id)a1;

@end
