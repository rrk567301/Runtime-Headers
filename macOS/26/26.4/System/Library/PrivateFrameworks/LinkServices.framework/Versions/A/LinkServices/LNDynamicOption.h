@class LNValue, LNStaticDeferredLocalizedString, LNImage;

@interface LNDynamicOption : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNValue *value;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *subtitle;
@property (readonly, nonatomic) LNImage *image;
@property (readonly, nonatomic) long long indentationLevel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(id)a0 indentationLevel:(long long)a1;

@end
