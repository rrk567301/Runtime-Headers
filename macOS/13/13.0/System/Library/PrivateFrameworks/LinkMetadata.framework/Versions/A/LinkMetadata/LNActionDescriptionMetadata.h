@class NSArray, LNStaticDeferredLocalizedString, LNDisplayRepresentation;

@interface LNActionDescriptionMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *descriptionText;
@property (readonly, copy, nonatomic) LNDisplayRepresentation *categoryName;
@property (readonly, copy, nonatomic) NSArray *searchKeywords;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDescriptionText:(id)a0 categoryName:(id)a1 searchKeywords:(id)a2;

@end
