@class NSString, NSArray, WFAQIScaleGradient;

@interface WFAQIScale : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *displayLabel;
@property (nonatomic, getter=isNumerical) BOOL numerical;
@property (nonatomic, getter=isAscending) BOOL ascending;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) WFAQIScaleGradient *gradient;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToScale:(id)a0;

@end
