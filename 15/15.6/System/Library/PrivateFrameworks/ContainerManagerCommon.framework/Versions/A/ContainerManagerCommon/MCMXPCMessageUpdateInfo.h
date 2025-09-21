@class NSSet, NSDictionary, MCMConcreteContainerIdentity;

@interface MCMXPCMessageUpdateInfo : MCMXPCMessageWithConcreteContainerBase <MCMParametersUpdateInfo>

@property (readonly, nonatomic) NSSet *deleteKeys;
@property (readonly, nonatomic) NSDictionary *infoDict;
@property (readonly, nonatomic) char fullReplace;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property (readonly, nonatomic) char includedPath;
@property (readonly, nonatomic) char includedInfo;
@property (readonly, nonatomic) char includedUserManagedAssetsPath;
@property (readonly, nonatomic) char includedCreator;

- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
