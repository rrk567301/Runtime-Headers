@class BMDeviceConnectivityContextAppBBcontextBBContext, BMDeviceConnectivityContextAppBBcontextQoEMetrics, NSString;

@interface BMDeviceConnectivityContextAppBBcontext : BMEventBase <BMStoreData>

@property (readonly, nonatomic) BMDeviceConnectivityContextAppBBcontextQoEMetrics *qoeMetrics;
@property (readonly, nonatomic) BMDeviceConnectivityContextAppBBcontextBBContext *bbContext;
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
- (id)initWithQoeMetrics:(id)a0 bbContext:(id)a1;

@end
