@class NSString, NSArray, BMMessagesSearchEventDisplayStarted, BMMessagesSearchEventDisplayEnded;

@interface BMMessagesSearchEventDisplayContext : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long millisecondsSinceSessionStarted;
@property (nonatomic) BOOL hasMillisecondsSinceSessionStarted;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) NSString *queryId;
@property (readonly, nonatomic) NSArray *visualComponent;
@property (readonly, nonatomic) BMMessagesSearchEventDisplayStarted *started;
@property (readonly, nonatomic) BMMessagesSearchEventDisplayEnded *ended;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMillisecondsSinceSessionStarted:(id)a0 sessionId:(id)a1 queryId:(id)a2 visualComponent:(id)a3 started:(id)a4 ended:(id)a5;
- (id)_visualComponentJSONArray;

@end
