@class NSString;

@interface BMSiriAssistantSuggestionFeaturesEnvironmentFeaturesHomeGraphStatus : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int numberOfDevices;
@property (nonatomic) char hasNumberOfDevices;
@property (readonly, nonatomic) int numberOfRooms;
@property (nonatomic) char hasNumberOfRooms;
@property (readonly, nonatomic) int numberOfHomes;
@property (nonatomic) char hasNumberOfHomes;
@property (readonly, nonatomic) char hasLights;
@property (nonatomic) char hasHasLights;
@property (readonly, nonatomic) char hasSecuritySystem;
@property (nonatomic) char hasHasSecuritySystem;
@property (readonly, nonatomic) char hasTemperatureControl;
@property (nonatomic) char hasHasTemperatureControl;
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
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithNumberOfDevices:(id)a0 numberOfRooms:(id)a1 numberOfHomes:(id)a2 hasLights:(id)a3 hasSecuritySystem:(id)a4 hasTemperatureControl:(id)a5;

@end
