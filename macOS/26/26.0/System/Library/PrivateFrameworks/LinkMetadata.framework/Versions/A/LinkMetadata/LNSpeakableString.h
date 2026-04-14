@class LNStaticDeferredLocalizedString;

@interface LNSpeakableString : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *spoken;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *printed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpoken:(id)a0 printed:(id)a1;

@end
