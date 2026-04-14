@class NSString;

@interface LNAppShortcutDynamicOptionsProviderReference : LNDynamicOptionsProviderReference

@property (readonly, copy, nonatomic) NSString *appShortcutsProviderMangledTypeName;
@property (readonly, nonatomic) long long appShortcutIndex;
@property (readonly, nonatomic) long long optionsProviderIndex;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppShortcutsProviderMangledTypeName:(id)a0 parameterIdentifier:(id)a1 appShortcutIndex:(long long)a2 optionsProviderIndex:(long long)a3;

@end
