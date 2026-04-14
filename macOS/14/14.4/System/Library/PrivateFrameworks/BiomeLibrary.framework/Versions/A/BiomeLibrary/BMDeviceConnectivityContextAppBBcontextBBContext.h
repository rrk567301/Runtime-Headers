@class NSString;

@interface BMDeviceConnectivityContextAppBBcontextBBContext : BMEventBase <BMStoreData>

@property (readonly, nonatomic) long long configuredMIMOlayers;
@property (nonatomic) BOOL hasConfiguredMIMOlayers;
@property (readonly, nonatomic) long long configuredBw;
@property (nonatomic) BOOL hasConfiguredBw;
@property (readonly, nonatomic) double tcpRTTavg;
@property (nonatomic) BOOL hasTcpRTTavg;
@property (readonly, nonatomic) double tcpRTTstd;
@property (nonatomic) BOOL hasTcpRTTstd;
@property (readonly, nonatomic) double rxRetransmissionRate;
@property (nonatomic) BOOL hasRxRetransmissionRate;
@property (readonly, nonatomic) double txRetransmissionRate;
@property (nonatomic) BOOL hasTxRetransmissionRate;
@property (readonly, nonatomic) double rxBer;
@property (nonatomic) BOOL hasRxBer;
@property (readonly, nonatomic) double txBer;
@property (nonatomic) BOOL hasTxBer;
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
- (id)initWithConfiguredMIMOlayers:(id)a0 configuredBw:(id)a1 tcpRTTavg:(id)a2 tcpRTTstd:(id)a3 rxRetransmissionRate:(id)a4 txRetransmissionRate:(id)a5 rxBer:(id)a6 txBer:(id)a7;

@end
