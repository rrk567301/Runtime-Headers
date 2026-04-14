@class NSString, LNStaticDeferredLocalizedString;

@interface LNAppShortcutOptionsCollectionMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, copy, nonatomic) NSString *systemImageName;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 systemImageName:(id)a1;

@end
