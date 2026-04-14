@class NSString, NSData, NSURL;

@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSData *serializedParameters;
@property (copy, nonatomic) NSURL *resolvedBaseURL;
@property (copy, nonatomic) id /* block */ serializedResultsCallback;

- (id)additionalHeaderValues;
- (long long)databaseScope;
- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)parsingStandaloneMessage;
- (BOOL)requestGETPreAuth;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (long long)serverType;
- (void).cxx_destruct;
- (long long)partitionType;
- (id)url;
- (id)requestBodyStream;
- (Class)expectedResponseClass;
- (id)initWithOperation:(id)a0 serviceName:(id)a1 functionName:(id)a2 serializedParameters:(id)a3 resolvedBaseURL:(id)a4;
- (void)prepareRequestOperationsForRequest:(id)a0;
- (Class)requestMessageClass;
- (BOOL)shouldCompressBody;
- (BOOL)wantsProtocolTranslator;

@end
