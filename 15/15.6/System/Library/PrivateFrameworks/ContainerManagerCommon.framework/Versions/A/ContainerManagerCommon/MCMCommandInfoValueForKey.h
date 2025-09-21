@class NSString, MCMConcreteContainerIdentity;

@interface MCMCommandInfoValueForKey : MCMCommand <MCMParametersWithKey>

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property (readonly, nonatomic) char includedPath;
@property (readonly, nonatomic) char includedInfo;
@property (readonly, nonatomic) char includedUserManagedAssetsPath;
@property (readonly, nonatomic) char includedCreator;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)infoValueForKeyWithError:(unsigned long long *)a0;
- (id)initWithKey:(id)a0 concreteContainerIdentity:(id)a1 context:(id)a2 resultPromise:(id)a3;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (char)preflightClientAllowed;

@end
