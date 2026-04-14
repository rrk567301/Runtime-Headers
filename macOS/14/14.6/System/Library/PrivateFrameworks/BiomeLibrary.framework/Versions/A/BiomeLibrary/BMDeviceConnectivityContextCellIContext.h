@class NSString, BMDeviceConnectivityContextCellIContextSignalQuality;

@interface BMDeviceConnectivityContextCellIContext : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int rat;
@property (readonly, nonatomic) long long freqBand;
@property (nonatomic) BOOL hasFreqBand;
@property (readonly, nonatomic) long long cellId;
@property (nonatomic) BOOL hasCellId;
@property (readonly, nonatomic) long long channelBandwidth;
@property (nonatomic) BOOL hasChannelBandwidth;
@property (readonly, nonatomic) BMDeviceConnectivityContextCellIContextSignalQuality *signalQuality;
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
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithRat:(int)a0 freqBand:(id)a1 cellId:(id)a2 channelBandwidth:(id)a3 signalQuality:(id)a4;

@end
