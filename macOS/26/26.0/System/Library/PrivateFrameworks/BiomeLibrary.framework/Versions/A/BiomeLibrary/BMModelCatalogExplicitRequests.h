@class NSString, BMModelCatalogSubscription;

@interface BMModelCatalogExplicitRequests : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *legacyRequestName;
@property (readonly, nonatomic) BMModelCatalogSubscription *subscription;
@property (readonly, nonatomic) BOOL subscribe;
@property (nonatomic) BOOL hasSubscribe;
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
- (id)initWithClientIdentifier:(id)a0 legacyRequestName:(id)a1 subscription:(id)a2 subscribe:(id)a3;

@end
