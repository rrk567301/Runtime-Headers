@class NSArray, LNStaticDeferredLocalizedString, LNDisplayRepresentation;

@interface LNActionDescriptionMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *descriptionText;
@property (readonly, copy, nonatomic) LNDisplayRepresentation *categoryName;
@property (readonly, copy, nonatomic) NSArray *searchKeywords;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDescriptionText:(id)a0 categoryName:(id)a1 searchKeywords:(id)a2;

@end
