@class NSString;

@interface BMMailCategorizationAnalyticsRecategorize : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *accountId;
@property (readonly, nonatomic) int messageId;
@property (nonatomic) char hasMessageId;
@property (readonly, nonatomic) int currCategoryView;
@property (nonatomic) char hasCurrCategoryView;
@property (readonly, nonatomic) int recategorizationBy;
@property (nonatomic) char hasRecategorizationBy;
@property (readonly, nonatomic) int recategorizeTimestamp;
@property (nonatomic) char hasRecategorizeTimestamp;
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
- (id)initWithAccountId:(id)a0 messageId:(id)a1 currCategoryView:(id)a2 recategorizationBy:(id)a3 recategorizeTimestamp:(id)a4;

@end
