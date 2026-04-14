@class NSDictionary;

@interface AEAssessmentIndividualConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowsNetworkAccess;
@property (nonatomic, getter=isRequired) BOOL required;
@property (copy, nonatomic) NSDictionary *configurationInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
