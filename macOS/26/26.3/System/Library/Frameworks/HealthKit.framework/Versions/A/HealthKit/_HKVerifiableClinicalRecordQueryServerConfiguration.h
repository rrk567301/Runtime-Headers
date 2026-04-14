@class NSArray;

@interface _HKVerifiableClinicalRecordQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSArray *recordTypes;
@property (copy, nonatomic) NSArray *sourceTypes;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
