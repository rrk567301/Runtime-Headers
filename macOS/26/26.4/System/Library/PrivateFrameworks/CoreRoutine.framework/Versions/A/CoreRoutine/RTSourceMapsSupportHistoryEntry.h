@class NSDate;

@interface RTSourceMapsSupportHistoryEntry : RTSourceMapsSupport

@property (readonly, nonatomic) NSDate *usageDate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithUsageDate:(id)a0;

@end
