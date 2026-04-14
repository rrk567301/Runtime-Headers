@class NSString;

@interface RKLocationCategoryRelevantContext : RKRelevantContext

@property (readonly, copy, nonatomic) NSString *rawCategory;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)analyticsDescription;
- (id)initWithRawCategory:(id)a0;

@end
