@class NSDate;

@interface RTSourceMapsSupportHistoryEntry : RTSourceMapsSupport

@property (readonly, nonatomic) NSDate *usageDate;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUsageDate:(id)a0;

@end
