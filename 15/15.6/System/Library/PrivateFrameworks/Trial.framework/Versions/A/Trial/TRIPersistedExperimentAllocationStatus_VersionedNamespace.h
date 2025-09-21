@class NSString;

@interface TRIPersistedExperimentAllocationStatus_VersionedNamespace : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (nonatomic) unsigned int compatibilityVersion;
@property (nonatomic) char hasCompatibilityVersion;

+ (id)descriptor;

@end
