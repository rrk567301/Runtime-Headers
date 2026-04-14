@class NSDate;

@interface RTSourceMapsSupportHistoryEntry : RTSourceMapsSupport

@property (readonly, nonatomic) NSDate *usageDate;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUsageDate:(id)a0;

@end
