@class NSString;

@interface BMVisualIntelligenceCameraLookupEventDimensionContext : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *visualLookupSessionId;
@property (readonly, nonatomic) NSString *systemLocale;
@property (readonly, nonatomic) NSString *currentCountry;
@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) NSString *osType;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) NSString *buildType;
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
- (id)initWithVisualLookupSessionId:(id)a0 systemLocale:(id)a1 currentCountry:(id)a2 build:(id)a3 osType:(id)a4 productType:(id)a5 buildType:(id)a6;

@end
