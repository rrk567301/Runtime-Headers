@class NSSet;

@interface MKPointOfInterestFilter : NSObject <NSSecureCoding, NSCopying> {
    NSSet *_includedCategories;
    NSSet *_excludedCategories;
}

@property (class, readonly, nonatomic) MKPointOfInterestFilter *filterIncludingAllCategories;
@property (class, readonly, nonatomic) MKPointOfInterestFilter *filterExcludingAllCategories;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=_isInclusive) char isInclusive;
@property (readonly, nonatomic, getter=_isAllCategories) char isAllCategories;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToPointOfInterestFilter:(id)a0;
- (char)_excludesAllCategories;
- (id)_geoPOICategoryFilter;
- (char)_includesAllCategories;
- (char)excludesCategory:(id)a0;
- (char)includesCategory:(id)a0;
- (id)initExcludingCategories:(id)a0;
- (id)initIncludingCategories:(id)a0;
- (id)initIncludingCategories:(id)a0 excludingCategories:(id)a1;

@end
