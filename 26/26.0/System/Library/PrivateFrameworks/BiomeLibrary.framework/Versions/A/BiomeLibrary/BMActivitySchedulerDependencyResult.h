@class NSString;

@interface BMActivitySchedulerDependencyResult : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *resultIdentifier;
@property (readonly, nonatomic) NSString *activityIdentifier;
@property (readonly, nonatomic) unsigned int resultCount;
@property (nonatomic) BOOL hasResultCount;
@property (readonly, nonatomic) int type;
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
- (id)initWithResultIdentifier:(id)a0 activityIdentifier:(id)a1 resultCount:(id)a2 type:(int)a3;

@end
