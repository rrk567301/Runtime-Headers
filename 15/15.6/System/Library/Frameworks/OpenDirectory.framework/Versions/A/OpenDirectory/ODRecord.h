@class NSString;

@interface ODRecord : NSObject

@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSString *recordName;
@property (readonly) long long secondsUntilPasswordExpires;
@property (readonly) long long secondsUntilAuthenticationsExpire;

+ (char)accessInstanceVariablesDirectly;

- (id)description;
- (unsigned long long)_cfTypeID;
- (id)valueForUndefinedKey:(id)a0;
- (char)synchronizeAndReturnError:(id *)a0;
- (id)valuesForAttribute:(id)a0 error:(id *)a1;
- (char)removeValuesForAttribute:(id)a0 error:(id *)a1;
- (struct __ODRecord { } *)__getODRecordRef;
- (id)accountPoliciesAndReturnError:(id *)a0;
- (char)addAccountPolicy:(id)a0 toCategory:(id)a1 error:(id *)a2;
- (char)addMemberRecord:(id)a0 error:(id *)a1;
- (char)addValue:(id)a0 toAttribute:(id)a1 error:(id *)a2;
- (char)authenticationAllowedAndReturnError:(id *)a0;
- (char)changePassword:(id)a0 toPassword:(id)a1 error:(id *)a2;
- (char)deleteRecordAndReturnError:(id *)a0;
- (id)effectivePoliciesAndReturnError:(id *)a0;
- (id)enumerateMembersWithOptions:(unsigned int)a0 returnAttributes:(id)a1 usingBlock:(id /* block */)a2;
- (id)enumerateMembershipWithOptions:(unsigned int)a0 returnAttributes:(id)a1 usingBlock:(id /* block */)a2;
- (char)isMemberRecord:(id)a0 error:(id *)a1;
- (char)isMemberRecordRefresh:(id)a0 error:(id *)a1;
- (char)passwordChangeAllowed:(id)a0 error:(id *)a1;
- (id)passwordContentSummaryAndReturnError:(id *)a0;
- (id)passwordPolicyAndReturnError:(id *)a0;
- (id)policiesAndReturnError:(id *)a0;
- (id)recordDetailsForAttributes:(id)a0 error:(id *)a1;
- (char)removeAccountPolicy:(id)a0 fromCategory:(id)a1 error:(id *)a2;
- (char)removeMemberRecord:(id)a0 error:(id *)a1;
- (char)removePolicy:(id)a0 error:(id *)a1;
- (char)removeValue:(id)a0 fromAttribute:(id)a1 error:(id *)a2;
- (char)setAccountPolicies:(id)a0 error:(id *)a1;
- (char)setNodeCredentials:(id)a0 password:(id)a1 error:(id *)a2;
- (char)setNodeCredentialsUsingKerberosCache:(id)a0 error:(id *)a1;
- (char)setNodeCredentialsWithBootstrapToken:(id)a0 error:(id *)a1;
- (char)setNodeCredentialsWithRecordType:(id)a0 authenticationType:(id)a1 authenticationItems:(id)a2 continueItems:(id *)a3 context:(id *)a4 error:(id *)a5;
- (char)setPolicies:(id)a0 error:(id *)a1;
- (char)setPolicy:(id)a0 value:(id)a1 error:(id *)a2;
- (char)setValue:(id)a0 forAttribute:(id)a1 error:(id *)a2;
- (id)supportedPoliciesAndReturnError:(id *)a0;
- (char)verifyExtendedWithAuthenticationType:(id)a0 authenticationItems:(id)a1 continueItems:(id *)a2 context:(id *)a3 error:(id *)a4;
- (char)verifyPassword:(id)a0 error:(id *)a1;
- (char)verifyPassword:(id)a0 withOptions:(id)a1 error:(id *)a2;
- (char)willAuthenticationsExpire:(unsigned long long)a0;
- (char)willPasswordExpire:(unsigned long long)a0;

@end
