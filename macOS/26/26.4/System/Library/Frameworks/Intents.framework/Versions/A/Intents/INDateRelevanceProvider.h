@class NSDate;

@interface INDateRelevanceProvider : INRelevanceProvider

@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSDate *endDate;

+ (BOOL)supportsSecureCoding;

- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;

@end
