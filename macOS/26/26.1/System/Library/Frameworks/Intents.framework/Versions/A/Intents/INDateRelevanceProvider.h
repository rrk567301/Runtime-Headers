@class NSDate;

@interface INDateRelevanceProvider : INRelevanceProvider

@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSDate *endDate;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
