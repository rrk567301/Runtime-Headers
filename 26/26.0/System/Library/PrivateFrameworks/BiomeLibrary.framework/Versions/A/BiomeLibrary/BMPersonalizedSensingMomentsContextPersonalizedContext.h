@class NSArray, NSString, BMPersonalizedSensingMomentsContextContextFetchDetails, BMPersonalizedSensingMomentsContextMomentsContextFetchOptions;

@interface BMPersonalizedSensingMomentsContextPersonalizedContext : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMPersonalizedSensingMomentsContextContextFetchDetails *fetchDetails;
@property (readonly, nonatomic) BMPersonalizedSensingMomentsContextMomentsContextFetchOptions *fetchOptions;
@property (readonly, nonatomic) NSArray *contexts;
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
- (id)_contextsJSONArray;
- (id)initWithFetchDetails:(id)a0 fetchOptions:(id)a1 contexts:(id)a2;

@end
