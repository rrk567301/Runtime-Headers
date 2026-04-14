@class NSString, BMDataCollectorTelemetryUploadTelemetry, BMDataCollectorTelemetryProcessingTelemetry, BMDataCollectorTelemetryDeviceContext;

@interface BMDataCollectorTelemetry : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BMDataCollectorTelemetryUploadTelemetry *uploadTelemetry;
@property (readonly, nonatomic) BMDataCollectorTelemetryProcessingTelemetry *processingTelemetry;
@property (readonly, nonatomic) BMDataCollectorTelemetryDeviceContext *deviceContext;
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
- (id)initWithBundleId:(id)a0 uploadTelemetry:(id)a1 processingTelemetry:(id)a2 deviceContext:(id)a3;

@end
