@class NSString;

@interface BMMailCategorizationAnalyticsRecategorize : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *accountId;
@property (readonly, nonatomic) int messageId;
@property (nonatomic) BOOL hasMessageId;
@property (readonly, nonatomic) int currCategoryView;
@property (nonatomic) BOOL hasCurrCategoryView;
@property (readonly, nonatomic) int recategorizationBy;
@property (nonatomic) BOOL hasRecategorizationBy;
@property (readonly, nonatomic) int recategorizeTimestamp;
@property (nonatomic) BOOL hasRecategorizeTimestamp;
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
- (id)initWithAccountId:(id)a0 messageId:(id)a1 currCategoryView:(id)a2 recategorizationBy:(id)a3 recategorizeTimestamp:(id)a4;

@end
