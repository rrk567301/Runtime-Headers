@class NSString;

@interface RKLocationCategoryRelevantContext : RKRelevantContext

@property (readonly, copy, nonatomic) NSString *rawCategory;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)analyticsDescription;
- (id)initWithRawCategory:(id)a0;

@end
