@interface HKFeatureAvailabilityMustBeTrueRequirement : HKFeatureAvailabilityBaseRequirement <NSSecureCoding, NSCopying> {
    char _isTrue;
}

@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWhatMustBeTrue:(char)a0;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;

@end
