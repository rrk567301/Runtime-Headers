@class NSUUID, LNStaticDeferredLocalizedString;

@interface LNChoiceOption : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, nonatomic) long long style;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 style:(long long)a2;

@end
