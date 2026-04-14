@class NSDate;

@interface RTSourceMapsSupportHistoryEntry : RTSourceMapsSupport

@property (readonly, nonatomic) NSDate *usageDate;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUsageDate:(id)a0;

@end
