@class NSDictionary;

@interface CRKFetchClassroomConfigurationResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *configuration;
@property (copy, nonatomic) NSDictionary *configurationsByType;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
