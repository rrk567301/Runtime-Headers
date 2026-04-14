@class NSArray, BMModelCatalogSubscriptionUseCase, NSString, NSDate;

@interface BMModelCatalogSubscription : BMEventBase <BMStoreData> {
    BOOL _hasRaw_expirationDate;
    double _raw_expirationDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMModelCatalogSubscriptionUseCase *useCase;
@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)_parametersJSONArray;
- (id)initWithUseCase:(id)a0 parameters:(id)a1 expirationDate:(id)a2;

@end
