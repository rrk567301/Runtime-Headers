@class NSString, LNAppShortcutDynamicOptionsProviderReference;

@interface LNAppShortcutOptionsCollection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) LNAppShortcutDynamicOptionsProviderReference *optionsProviderReference;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocalizedTitle:(id)a0 systemImageName:(id)a1 optionsProviderReference:(id)a2;

@end
