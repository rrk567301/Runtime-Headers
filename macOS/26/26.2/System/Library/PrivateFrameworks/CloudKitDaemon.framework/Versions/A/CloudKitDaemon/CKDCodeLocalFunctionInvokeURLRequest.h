@class NSString, NSData, NSURL;

@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSData *serializedParameters;
@property (copy, nonatomic) NSURL *resolvedBaseURL;
@property (copy, nonatomic) id /* block */ serializedResultsCallback;

- (BOOL)requestGETPreAuth;
- (id)additionalHeaderValues;
- (BOOL)allowsAnonymousAccount;
- (BOOL)parsingStandaloneMessage;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (long long)databaseScope;
- (void).cxx_destruct;
- (long long)serverType;
- (id)url;
- (long long)partitionType;
- (id)requestBodyStream;
- (Class)expectedResponseClass;
- (id)initWithOperation:(id)a0 serviceName:(id)a1 functionName:(id)a2 serializedParameters:(id)a3 resolvedBaseURL:(id)a4;
- (void)prepareRequestOperationsForRequest:(id)a0;
- (Class)requestMessageClass;
- (BOOL)shouldCompressBody;
- (BOOL)wantsProtocolTranslator;

@end
