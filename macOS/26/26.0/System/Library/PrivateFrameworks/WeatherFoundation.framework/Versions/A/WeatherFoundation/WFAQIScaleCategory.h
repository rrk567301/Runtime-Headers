@class NSString;

@interface WFAQIScaleCategory : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *glyph;
@property (copy, nonatomic) NSString *recommendation;
@property (nonatomic) unsigned long long categoryNumber;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) unsigned long long categoryIndex;
@property (copy, nonatomic) NSString *localizedCategoryDescription;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCategoryIndex:(unsigned long long)a0 localizedCategoryDescription:(id)a1;
- (BOOL)isEqualToScaleCategory:(id)a0;

@end
