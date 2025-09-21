@class NSString;

@interface VCRateControlMLEnrollment : VCObject {
    BOOL _shouldGenerateLocalTrainingData;
}

@property (readonly, retain, nonatomic) NSString *modelPath;
@property (readonly, nonatomic) NSString *recipeID;
@property (readonly, nonatomic) unsigned int nIteration;
@property (readonly, nonatomic) BOOL shouldGenerateLocalTrainingData;
@property (readonly, nonatomic) unsigned int reportingGroup;
@property (readonly, nonatomic) NSString *trialModelID;

- (void)dealloc;
- (id)init;
- (BOOL)checkSupportForPFLOrTrialEnrollment;
- (id)checkValidJSONAtPath:(id)a0;
- (BOOL)isEnrollmentDisabledByStorebagSwitch;
- (void)setConfigurationWithPFLJSON:(id)a0;
- (void)setDefaultPath;
- (int)setPFLPath;
- (void)setTrialPath;
- (BOOL)setupWithUserDefault;
- (void)useTrialPath:(id)a0 trialGroup:(long long)a1 trialID:(id)a2;
- (BOOL)validateFilePath:(id)a0;
- (BOOL)validateHardwareSupport;
- (BOOL)validatePFLExpirationDateWithPFLJSON:(id)a0;
- (int)validateTrainingDataJSONPath:(id)a0 withPFLObject:(id)a1;

@end
