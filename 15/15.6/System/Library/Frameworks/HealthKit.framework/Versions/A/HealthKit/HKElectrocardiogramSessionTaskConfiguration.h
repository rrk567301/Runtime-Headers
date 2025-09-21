@class HKElectrocardiogramSessionConfiguration;

@interface HKElectrocardiogramSessionTaskConfiguration : HKTaskConfiguration <NSCopying>

@property (copy, nonatomic) HKElectrocardiogramSessionConfiguration *sessionConfiguration;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
