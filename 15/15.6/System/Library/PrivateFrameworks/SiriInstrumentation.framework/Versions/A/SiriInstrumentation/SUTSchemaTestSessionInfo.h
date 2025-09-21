@class NSString, NSArray, NSData;

@interface SUTSchemaTestSessionInfo : SISchemaInstrumentationMessage {
    struct { unsigned char isSimulator : 1; } _has;
}

@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) char hasSystemBuild;
@property (copy, nonatomic) NSString *cpuArchitecture;
@property (nonatomic) char hasCpuArchitecture;
@property (copy, nonatomic) NSString *hardwareModel;
@property (nonatomic) char hasHardwareModel;
@property (copy, nonatomic) NSString *modelNumber;
@property (nonatomic) char hasModelNumber;
@property (copy, nonatomic) NSString *productType;
@property (nonatomic) char hasProductType;
@property (copy, nonatomic) NSString *productVersion;
@property (nonatomic) char hasProductVersion;
@property (nonatomic) char isSimulator;
@property (nonatomic) char hasIsSimulator;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) char hasBundleId;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) char hasDeviceName;
@property (copy, nonatomic) NSArray *testSessionInfoItems;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addTestSessionInfoItem:(id)a0;
- (void)clearTestSessionInfoItem;
- (void)deleteBundleId;
- (void)deleteCpuArchitecture;
- (void)deleteDeviceName;
- (void)deleteHardwareModel;
- (void)deleteIsSimulator;
- (void)deleteModelNumber;
- (void)deleteProductType;
- (void)deleteProductVersion;
- (void)deleteSystemBuild;
- (void)deleteTestSessionInfoItem;
- (id)suppressMessageUnderConditions;
- (id)testSessionInfoItemAtIndex:(unsigned long long)a0;
- (unsigned long long)testSessionInfoItemCount;

@end
