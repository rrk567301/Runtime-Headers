@class AEAssessmentIndividualConfiguration, NSDictionary;

@interface AEAssessmentState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) AEAssessmentIndividualConfiguration *mainIndividualConfiguration;
@property (copy, nonatomic) NSDictionary *configurationsByApplicationDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
