@class CKDTrustedTargetWrappedKey, NSString, NSArray, NSData;

@interface CKDCodeFunctionInvokeURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSData *serializedParameters;
@property (retain, nonatomic) NSData *attestationEntropy;
@property (copy, nonatomic) NSArray *pccWrappedInvocationKeys;
@property (copy, nonatomic) CKDTrustedTargetWrappedKey *trustedTargetWrappedInvocationKey;
@property (copy, nonatomic) id /* block */ serializedResultsCallback;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (BOOL)allowsAnonymousAccount;
- (BOOL)requestGETPreAuth;
- (id)additionalHeaderValues;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (long long)databaseScope;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 serviceName:(id)a1 functionName:(id)a2 serializedParameters:(id)a3 attestationEntropy:(id)a4 pccWrappedInvocationKeys:(id)a5 trustedTargetWrappedInvocationKey:(id)a6;

@end
