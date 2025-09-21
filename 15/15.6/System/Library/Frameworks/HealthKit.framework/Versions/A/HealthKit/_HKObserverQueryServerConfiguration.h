@class NSArray;

@interface _HKObserverQueryServerConfiguration : HKQueryServerConfiguration

@property (nonatomic) char observeUnfrozenSeries;
@property (copy, nonatomic) NSArray *queryDescriptors;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
