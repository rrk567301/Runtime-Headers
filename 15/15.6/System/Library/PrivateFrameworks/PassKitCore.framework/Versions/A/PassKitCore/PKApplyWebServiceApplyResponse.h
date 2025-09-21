@class NSSet, PKAccount, PKFeatureApplication;

@interface PKApplyWebServiceApplyResponse : PKApplyWebServiceResponse

@property (readonly, nonatomic) PKFeatureApplication *featureApplication;
@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) unsigned long long requiredDeviceMetadataFields;
@property (readonly, nonatomic) char requiresODIAssessment;
@property (readonly, copy, nonatomic) NSSet *actionIdentifiersRequiringAuthentication;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)nextStepInfo;

@end
