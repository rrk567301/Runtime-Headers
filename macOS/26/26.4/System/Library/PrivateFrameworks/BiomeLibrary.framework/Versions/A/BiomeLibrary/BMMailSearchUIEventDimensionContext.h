@class NSString;

@interface BMMailSearchUIEventDimensionContext : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *systemLocale;
@property (readonly, nonatomic) NSString *currentCountry;
@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) NSString *osType;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) int buildType;
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
- (id)initWithSystemLocale:(id)a0 currentCountry:(id)a1 build:(id)a2 osType:(id)a3 productType:(id)a4 buildType:(int)a5;

@end
