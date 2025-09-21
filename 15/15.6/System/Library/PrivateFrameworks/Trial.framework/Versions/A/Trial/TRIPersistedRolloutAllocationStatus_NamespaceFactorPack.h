@class NSString;

@interface TRIPersistedRolloutAllocationStatus_NamespaceFactorPack : TRIPBMessage

@property (copy, nonatomic) NSString *namespace_p;
@property (nonatomic) char hasNamespace_p;
@property (copy, nonatomic) NSString *factorPack;
@property (nonatomic) char hasFactorPack;

+ (id)descriptor;

@end
