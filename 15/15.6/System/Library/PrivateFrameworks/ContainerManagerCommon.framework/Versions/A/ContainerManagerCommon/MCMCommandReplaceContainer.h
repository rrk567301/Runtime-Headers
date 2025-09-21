@class MCMConcreteContainerIdentity;

@interface MCMCommandReplaceContainer : MCMCommand <MCMParametersReplace>

@property (readonly, nonatomic) char preserveOldPathIdentifier;
@property (readonly, nonatomic) char preserveOldInternalUUID;
@property (readonly, nonatomic) char asyncReclaim;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityOld;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityNew;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithConcreteContainerIdentityOld:(id)a0 concreteContainerIdentityNew:(id)a1 preserveOldPathIdentifier:(char)a2 preserveOldInternalUUID:(char)a3 asyncReclaim:(char)a4 context:(id)a5 resultPromise:(id)a6;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (char)preflightClientAllowed;

@end
