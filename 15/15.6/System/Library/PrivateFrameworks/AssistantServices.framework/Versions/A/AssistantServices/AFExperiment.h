@class NSString, NSDictionary;

@interface AFExperiment : NSObject <AFInvocationFeedbackExperiment, AFExperimentForSiriVOXTapToSiriBehavior, AFExperimentForSiriVOXSounds, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char playsTwoShotSoundForSiriVOXSounds;
@property (readonly, nonatomic) char playsSessionInactiveSoundForSiriVOXSounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char playsSound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long featureGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *configurationIdentifier;
@property (readonly, copy, nonatomic) NSString *configurationVersion;
@property (readonly, copy, nonatomic) NSString *deploymentGroupIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *deploymentGroupProperties;
@property (readonly, nonatomic) long long deploymentReason;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (char)isFeatureGroupOneEnabled;
- (id)initWithConfigurationIdentifier:(id)a0 configurationVersion:(id)a1 deploymentGroupIdentifier:(id)a2 deploymentGroupProperties:(id)a3 deploymentReason:(long long)a4;
- (char)isFeatureGroupFourEnabled;
- (char)isFeatureGroupThreeEnabled;
- (char)isFeatureGroupTwoEnabled;
- (void)logExperimentExposureForInvocationFeedbacks;
- (void)logExperimentExposureForSiriVOXSounds;
- (void)logExperimentExposureForTapToSiriBehavior;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
