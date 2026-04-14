@class LNImage, LNStaticDeferredLocalizedString, NSArray;

@interface LNDisplayRepresentation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *subtitle;
@property (readonly, nonatomic) LNImage *image;
@property (readonly, copy, nonatomic) NSArray *synonyms;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 synonyms:(id)a3;

@end
