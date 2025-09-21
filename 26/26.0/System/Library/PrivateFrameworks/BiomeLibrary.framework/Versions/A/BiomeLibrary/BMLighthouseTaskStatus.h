@class NSString, BMLighthouseTaskStatusPushMetadata, BMLighthouseTaskStatusPullMetadata;

@interface BMLighthouseTaskStatus : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int version;
@property (nonatomic) BOOL hasVersion;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSString *taskState;
@property (readonly, nonatomic) NSString *taskSource;
@property (readonly, nonatomic) BMLighthouseTaskStatusPushMetadata *pushMetadata;
@property (readonly, nonatomic) BMLighthouseTaskStatusPullMetadata *pullMetadata;
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
- (id)initWithVersion:(id)a0 taskName:(id)a1 taskState:(id)a2;
- (id)initWithVersion:(id)a0 taskName:(id)a1 taskState:(id)a2 taskSource:(id)a3 pushMetadata:(id)a4 pullMetadata:(id)a5;

@end
