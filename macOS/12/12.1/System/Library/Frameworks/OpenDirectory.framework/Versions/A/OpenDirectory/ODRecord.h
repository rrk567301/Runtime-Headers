@class NSString;

@interface ODRecord : NSObject

@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSString *recordName;
@property (readonly) long long secondsUntilPasswordExpires;
@property (readonly) long long secondsUntilAuthenticationsExpire;

+ (BOOL)accessInstanceVariablesDirectly;

- (id)description;
- (unsigned long long)_cfTypeID;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)synchronizeAndReturnError:(id *)a0;
- (id)valuesForAttribute:(id)a0 error:(id *)a1;
- (id)policiesAndReturnError:(id *)a0;
- (id)supportedPoliciesAndReturnError:(id *)a0;
- (BOOL)setPolicies:(id)a0 error:(id *)a1;
- (BOOL)setPolicy:(id)a0 value:(id)a1 error:(id *)a2;
- (BOOL)removePolicy:(id)a0 error:(id *)a1;
- (BOOL)addAccountPolicy:(id)a0 toCategory:(id)a1 error:(id *)a2;
- (BOOL)removeAccountPolicy:(id)a0 fromCategory:(id)a1 error:(id *)a2;
- (BOOL)setAccountPolicies:(id)a0 error:(id *)a1;
- (id)accountPoliciesAndReturnError:(id *)a0;
- (struct __ODRecord { } *)__getODRecordRef;
- (id)effectivePoliciesAndReturnError:(id *)a0;
- (BOOL)setNodeCredentials:(id)a0 password:(id)a1 error:(id *)a2;
- (BOOL)setNodeCredentialsWithRecordType:(id)a0 authenticationType:(id)a1 authenticationItems:(id)a2 continueItems:(id *)a3 context:(id *)a4 error:(id *)a5;
- (BOOL)setNodeCredentialsUsingKerberosCache:(id)a0 error:(id *)a1;
- (id)passwordPolicyAndReturnError:(id *)a0;
- (BOOL)verifyPassword:(id)a0 error:(id *)a1;
- (BOOL)verifyExtendedWithAuthenticationType:(id)a0 authenticationItems:(id)a1 continueItems:(id *)a2 context:(id *)a3 error:(id *)a4;
- (BOOL)changePassword:(id)a0 toPassword:(id)a1 error:(id *)a2;
- (id)recordDetailsForAttributes:(id)a0 error:(id *)a1;
- (BOOL)deleteRecordAndReturnError:(id *)a0;
- (BOOL)setValue:(id)a0 forAttribute:(id)a1 error:(id *)a2;
- (BOOL)removeValuesForAttribute:(id)a0 error:(id *)a1;
- (BOOL)addValue:(id)a0 toAttribute:(id)a1 error:(id *)a2;
- (BOOL)removeValue:(id)a0 fromAttribute:(id)a1 error:(id *)a2;
- (BOOL)authenticationAllowedAndReturnError:(id *)a0;
- (BOOL)passwordChangeAllowed:(id)a0 error:(id *)a1;
- (BOOL)willPasswordExpire:(unsigned long long)a0;
- (BOOL)willAuthenticationsExpire:(unsigned long long)a0;
- (id)passwordContentSummaryAndReturnError:(id *)a0;
- (BOOL)addMemberRecord:(id)a0 error:(id *)a1;
- (BOOL)removeMemberRecord:(id)a0 error:(id *)a1;
- (BOOL)isMemberRecord:(id)a0 error:(id *)a1;
- (BOOL)isMemberRecordRefresh:(id)a0 error:(id *)a1;
- (BOOL)setNodeCredentialsWithBootstrapToken:(id)a0 error:(id *)a1;
- (BOOL)verifyPassword:(id)a0 withOptions:(id)a1 error:(id *)a2;
- (id)enumerateMembersWithOptions:(unsigned int)a0 returnAttributes:(id)a1 usingBlock:(id /* block */)a2;
- (id)enumerateMembershipWithOptions:(unsigned int)a0 returnAttributes:(id)a1 usingBlock:(id /* block */)a2;

@end
