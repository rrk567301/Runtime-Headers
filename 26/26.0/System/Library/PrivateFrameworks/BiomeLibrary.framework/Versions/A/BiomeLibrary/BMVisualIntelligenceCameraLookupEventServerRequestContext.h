@class NSString, BMVisualIntelligenceCameraLookupEventRequestMetadata, BMVisualIntelligenceCameraLookupEventFailureMetadata, BMVisualIntelligenceCameraLookupEventResponseMetadata;

@interface BMVisualIntelligenceCameraLookupEventServerRequestContext : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *visualLookupSessionId;
@property (readonly, nonatomic) NSString *connectionUuid;
@property (readonly, nonatomic) BMVisualIntelligenceCameraLookupEventRequestMetadata *started;
@property (readonly, nonatomic) BMVisualIntelligenceCameraLookupEventResponseMetadata *ended;
@property (readonly, nonatomic) BMVisualIntelligenceCameraLookupEventFailureMetadata *failed;
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
- (id)initWithVisualLookupSessionId:(id)a0 connectionUuid:(id)a1 started:(id)a2 ended:(id)a3 failed:(id)a4;

@end
