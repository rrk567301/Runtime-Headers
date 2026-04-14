@class NSString;

@interface RKLocationCategoryRelevantContext : RKRelevantContext

@property (readonly, copy, nonatomic) NSString *rawCategory;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)analyticsDescription;
- (id)initWithRawCategory:(id)a0;

@end
