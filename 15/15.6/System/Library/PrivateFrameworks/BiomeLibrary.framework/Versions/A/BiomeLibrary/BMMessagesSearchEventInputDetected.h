@class NSString, NSArray;

@interface BMMessagesSearchEventInputDetected : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long millisecondsSinceSessionStarted;
@property (nonatomic) char hasMillisecondsSinceSessionStarted;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) NSString *queryId;
@property (readonly, nonatomic) char isZkw;
@property (nonatomic) char hasIsZkw;
@property (readonly, nonatomic) NSArray *token;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithMillisecondsSinceSessionStarted:(id)a0 sessionId:(id)a1 queryId:(id)a2 isZkw:(id)a3 token:(id)a4;
- (id)_tokenJSONArray;

@end
