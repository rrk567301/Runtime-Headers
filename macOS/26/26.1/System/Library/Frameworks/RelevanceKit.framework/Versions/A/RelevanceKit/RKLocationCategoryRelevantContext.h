@class NSString;

@interface RKLocationCategoryRelevantContext : RKRelevantContext

@property (readonly, copy, nonatomic) NSString *rawCategory;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)analyticsDescription;
- (id)initWithRawCategory:(id)a0;

@end
