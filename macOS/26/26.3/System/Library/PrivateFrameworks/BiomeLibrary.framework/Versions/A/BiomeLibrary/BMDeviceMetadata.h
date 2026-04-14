@class NSString;

@interface BMDeviceMetadata : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic) NSString *supplementalBuild;
@property (readonly, nonatomic) BOOL rapidSecurityResponsePreReboot;
@property (nonatomic) BOOL hasRapidSecurityResponsePreReboot;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)serialize;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initByReadFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 build:(id)a1 platform:(int)a2 supplementalBuild:(id)a3 rapidSecurityResponsePreReboot:(id)a4;

@end
