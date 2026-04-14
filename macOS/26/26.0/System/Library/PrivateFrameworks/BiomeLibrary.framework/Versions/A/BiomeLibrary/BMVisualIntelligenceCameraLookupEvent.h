@class BMVisualIntelligenceCameraLookupEventUserInteractionDetected, NSString, BMVisualIntelligenceCameraLookupEventDimensionContext, BMVisualIntelligenceCameraLookupEventServerRequestContext, BMVisualIntelligenceCameraLookupEventVisualIntelligenceContext, BMVisualIntelligenceCameraLookupEventDisplayContext;

@interface BMVisualIntelligenceCameraLookupEvent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) BMVisualIntelligenceCameraLookupEventDimensionContext *dimensionContext;
@property (readonly, nonatomic) BMVisualIntelligenceCameraLookupEventVisualIntelligenceContext *visualIntelligenceContext;
@property (readonly, nonatomic) BMVisualIntelligenceCameraLookupEventServerRequestContext *serverRequestContext;
@property (readonly, nonatomic) BMVisualIntelligenceCameraLookupEventDisplayContext *displayContext;
@property (readonly, nonatomic) BMVisualIntelligenceCameraLookupEventUserInteractionDetected *userInteractionDetected;
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
- (id)initWithSessionId:(id)a0 dimensionContext:(id)a1 visualIntelligenceContext:(id)a2 serverRequestContext:(id)a3 displayContext:(id)a4 userInteractionDetected:(id)a5;

@end
