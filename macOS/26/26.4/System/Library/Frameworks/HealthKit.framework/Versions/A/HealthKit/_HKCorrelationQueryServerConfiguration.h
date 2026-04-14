@class NSDictionary;

@interface _HKCorrelationQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDictionary *filterDictionary;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
