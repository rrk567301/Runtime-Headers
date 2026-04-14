@class NSString;

@interface BMDeviceConnectivityContextAppBBcontextQoEMetrics : BMEventBase <BMStoreData>

@property (readonly, nonatomic) double phyUlTput;
@property (nonatomic) BOOL hasPhyUlTput;
@property (readonly, nonatomic) double phyDlTput;
@property (nonatomic) BOOL hasPhyDlTput;
@property (readonly, nonatomic) double packetLoss;
@property (nonatomic) BOOL hasPacketLoss;
@property (readonly, nonatomic) double delay;
@property (nonatomic) BOOL hasDelay;
@property (readonly, nonatomic) double videoStreamingStallTime;
@property (nonatomic) BOOL hasVideoStreamingStallTime;
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
- (id)initWithPhyUlTput:(id)a0 phyDlTput:(id)a1 packetLoss:(id)a2 delay:(id)a3 videoStreamingStallTime:(id)a4;

@end
