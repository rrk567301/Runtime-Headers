@class NSString;

@interface BMDataCollectorTelemetryProcessingTelemetry : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long eventsProcessed;
@property (nonatomic) BOOL hasEventsProcessed;
@property (readonly, nonatomic) unsigned long long eventsSkippedRedactedBeforeUpload;
@property (nonatomic) BOOL hasEventsSkippedRedactedBeforeUpload;
@property (readonly, nonatomic) unsigned long long eventsToUpload;
@property (nonatomic) BOOL hasEventsToUpload;
@property (readonly, nonatomic) unsigned long long eventsInBiome;
@property (nonatomic) BOOL hasEventsInBiome;
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
- (id)initWithEventsProcessed:(id)a0 eventsSkippedRedactedBeforeUpload:(id)a1 eventsToUpload:(id)a2 eventsInBiome:(id)a3;

@end
