@class NSString;

@interface HKDeviceKeyValueStoreTaskConfiguration : HKTaskConfiguration

@property (copy, nonatomic) NSString *domain;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
