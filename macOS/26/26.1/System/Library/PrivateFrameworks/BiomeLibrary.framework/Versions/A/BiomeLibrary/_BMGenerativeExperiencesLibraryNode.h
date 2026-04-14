@interface _BMGenerativeExperiencesLibraryNode : _BMLibraryNode

+ (id)identifier;
+ (id)sublibraries;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)FailureTracking;
+ (id)GuardrailResult;
+ (id)TransparencyLog;
+ (id)configurationForGuardrailResult;
+ (id)GeneratedImageFeatures;
+ (id)PromptTags;
+ (id)configurationForFailureTracking;
+ (id)configurationForTransparencyLog;
+ (id)storeConfigurationForPromptTags;
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
