@class NSString, LNAppShortcutDynamicOptionsProviderReference;

@interface LNAppShortcutOptionsCollection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) LNAppShortcutDynamicOptionsProviderReference *optionsProviderReference;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithLocalizedTitle:(id)a0 systemImageName:(id)a1 optionsProviderReference:(id)a2;

@end
