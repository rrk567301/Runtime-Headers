@interface CRKFetchConfigurationTypeResultObject : CATTaskResultObject

@property (nonatomic) unsigned long long configurationType;
@property (nonatomic, getter=isSignedInToStudentMAID) BOOL signedInToStudentMAID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
