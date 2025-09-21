@interface CRKFetchConfigurationTypeResultObject : CATTaskResultObject

@property (nonatomic) unsigned long long configurationType;
@property (nonatomic, getter=isSignedInToStudentMAID) char signedInToStudentMAID;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
