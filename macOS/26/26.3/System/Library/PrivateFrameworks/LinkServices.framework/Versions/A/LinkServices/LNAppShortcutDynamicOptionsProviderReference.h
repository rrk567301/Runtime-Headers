@class NSString;

@interface LNAppShortcutDynamicOptionsProviderReference : LNDynamicOptionsProviderReference

@property (readonly, copy, nonatomic) NSString *appShortcutsProviderMangledTypeName;
@property (readonly, nonatomic) long long appShortcutIndex;
@property (readonly, nonatomic) long long optionsProviderIndex;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAppShortcutsProviderMangledTypeName:(id)a0 parameterIdentifier:(id)a1 appShortcutIndex:(long long)a2 optionsProviderIndex:(long long)a3;

@end
