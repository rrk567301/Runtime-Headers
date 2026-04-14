@class NSString;

@interface BMDeviceConnectivityContextCellIContextSignalQuality : BMEventBase <BMStoreData>

@property (readonly, nonatomic) double rsrp;
@property (nonatomic) BOOL hasRsrp;
@property (readonly, nonatomic) double sinr;
@property (nonatomic) BOOL hasSinr;
@property (readonly, nonatomic) double rsrq;
@property (nonatomic) BOOL hasRsrq;
@property (readonly, nonatomic) double rssi;
@property (nonatomic) BOOL hasRssi;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;
+ (unsigned int)latestDataVersion;

- (BOOL)isEqual:(id)a0;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithRsrp:(id)a0 sinr:(id)a1 rsrq:(id)a2 rssi:(id)a3;

@end
