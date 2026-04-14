@interface HKFeatureAvailabilityMustBeTrueRequirement : HKFeatureAvailabilityBaseRequirement <NSSecureCoding, NSCopying> {
    BOOL _isTrue;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithWhatMustBeTrue:(BOOL)a0;

@end
