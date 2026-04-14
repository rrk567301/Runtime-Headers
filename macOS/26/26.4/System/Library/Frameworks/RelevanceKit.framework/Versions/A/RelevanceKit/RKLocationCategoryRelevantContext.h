@class NSString;

@interface RKLocationCategoryRelevantContext : RKRelevantContext

@property (readonly, copy, nonatomic) NSString *rawCategory;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)analyticsDescription;
- (id)initWithRawCategory:(id)a0;

@end
