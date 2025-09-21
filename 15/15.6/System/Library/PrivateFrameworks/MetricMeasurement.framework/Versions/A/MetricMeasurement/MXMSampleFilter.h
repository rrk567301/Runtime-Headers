@class NSSet, NSMutableDictionary;

@interface MXMSampleFilter : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSSet *tagFilters;
@property (retain, nonatomic) NSMutableDictionary *attributeFilters;
@property (readonly, nonatomic) char finite;
@property (readonly, nonatomic, getter=finite) char isFinite;

+ (id)filterWithAttributeFilter:(id)a0;
+ (id)filterWithAttributeFilter:(id)a0 tagFilter:(id)a1;
+ (id)filterWithAttributeFilters:(id)a0;
+ (id)filterWithTagFilter:(id)a0;
+ (id)filterWithTagFilters:(id)a0;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addAttributeFilters:(id)a0;
- (id)attributeFilterWithName:(id)a0;
- (id)initWithAttributeFilter:(id)a0;
- (id)initWithAttributeFilter:(id)a0 tagFilter:(id)a1;
- (id)initWithAttributeFilters:(id)a0;
- (id)initWithAttributeFilters:(id)a0 tagFilters:(id)a1;
- (id)initWithTagFilter:(id)a0;
- (id)initWithTagFilters:(id)a0;
- (char)matchesSample:(id)a0;
- (char)matchesSampleSet:(id)a0;
- (char)matchesSamplesWithAttribute:(id)a0;
- (char)matchesSamplesWithAttributes:(id)a0;
- (char)matchesSamplesWithTag:(id)a0;

@end
