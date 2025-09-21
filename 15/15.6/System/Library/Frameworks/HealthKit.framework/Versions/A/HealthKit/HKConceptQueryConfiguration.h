@class HKConceptSelection;

@interface HKConceptQueryConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) HKConceptSelection *selection;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
