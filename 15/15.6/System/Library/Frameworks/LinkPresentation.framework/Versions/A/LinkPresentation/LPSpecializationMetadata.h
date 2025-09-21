@interface LPSpecializationMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char _dummyPropertyForObservation;
@property (readonly, nonatomic) char _canDeferAsynchronousFieldsMetadataUpdateUntilCompletion;
@property (readonly, nonatomic) char _disallowsURLOverrideByDelegate;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;

@end
