@class NSDate;

@interface INDateRelevanceProvider : INRelevanceProvider

@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSDate *endDate;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;

@end
