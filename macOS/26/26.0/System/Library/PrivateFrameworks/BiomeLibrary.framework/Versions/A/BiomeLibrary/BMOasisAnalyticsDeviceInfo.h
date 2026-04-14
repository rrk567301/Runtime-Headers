@class NSString;

@interface BMOasisAnalyticsDeviceInfo : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL isInternal;
@property (nonatomic) BOOL hasIsInternal;
@property (readonly, nonatomic) NSString *systemBuild;
@property (readonly, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) int oasisTeam;
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
- (id)initWithIsInternal:(id)a0 systemBuild:(id)a1 deviceType:(id)a2 deviceId:(id)a3;
- (id)initWithIsInternal:(id)a0 systemBuild:(id)a1 deviceType:(id)a2 deviceId:(id)a3 oasisTeam:(int)a4;

@end
