@interface _BMGenerativeExperiencesLibraryNode : _BMLibraryNode

+ (id)sublibraries;
+ (id)identifier;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)FailureTracking;
+ (id)GuardrailResult;
+ (id)configurationForGuardrailResult;
+ (id)storeConfigurationForPromptTags;
+ (id)GeneratedImageFeatures;
+ (id)PromptTags;
+ (id)TransparencyLog;
+ (id)configurationForFailureTracking;
+ (id)configurationForTransparencyLog;
+ (id)WritingToolsFeatures;
+ (id)configurationForPromptTags;
+ (id)storeConfigurationForFailureTracking;
+ (id)storeConfigurationForGuardrailResult;
+ (id)storeConfigurationForTransparencyLog;
+ (id)syncPolicyForFailureTracking;
+ (id)syncPolicyForGuardrailResult;
+ (id)syncPolicyForPromptTags;
+ (id)syncPolicyForTransparencyLog;

@end
