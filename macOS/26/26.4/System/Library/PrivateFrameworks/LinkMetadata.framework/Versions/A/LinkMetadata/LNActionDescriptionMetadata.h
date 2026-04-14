@class LNDisplayRepresentation, NSArray, LNStaticDeferredLocalizedString, LNActionDescriptionIcon;

@interface LNActionDescriptionMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *descriptionText;
@property (readonly, copy, nonatomic) LNDisplayRepresentation *categoryName;
@property (readonly, copy, nonatomic) NSArray *searchKeywords;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *resultValueName;
@property (readonly, copy, nonatomic) LNActionDescriptionIcon *icon;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithDescriptionText:(id)a0 categoryName:(id)a1 searchKeywords:(id)a2 resultValueName:(id)a3;
- (id)actionDescriptionMetadataWithIcon:(id)a0;
- (id)initWithDescriptionText:(id)a0 categoryName:(id)a1 searchKeywords:(id)a2;
- (id)initWithDescriptionText:(id)a0 categoryName:(id)a1 searchKeywords:(id)a2 resultValueName:(id)a3 icon:(id)a4;

@end
