@class NSData, NSString, BMUAFISOLocale;

@interface BMUAFDeviceMetadata : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSData *deviceId;
@property (readonly, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) unsigned int programCode;
@property (nonatomic) BOOL hasProgramCode;
@property (readonly, nonatomic) NSString *systemBuild;
@property (readonly, nonatomic) BMUAFISOLocale *inputLocale;
@property (readonly, nonatomic) unsigned long long nanoSecondsSinceLastBoot;
@property (nonatomic) BOOL hasNanoSecondsSinceLastBoot;
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
- (id)initWithDeviceId:(id)a0 deviceType:(id)a1 programCode:(id)a2 systemBuild:(id)a3 inputLocale:(id)a4 nanoSecondsSinceLastBoot:(id)a5;

@end
