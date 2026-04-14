@class NSArray, NSString;

@interface BMDataCollectorTelemetryUploadTelemetry : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long eventsProcessed;
@property (nonatomic) BOOL hasEventsProcessed;
@property (readonly, nonatomic) unsigned long long eventsSkippedRedactedAtUpload;
@property (nonatomic) BOOL hasEventsSkippedRedactedAtUpload;
@property (readonly, nonatomic) unsigned long long eventsUploaded;
@property (nonatomic) BOOL hasEventsUploaded;
@property (readonly, nonatomic) unsigned long long bytesUploaded;
@property (nonatomic) BOOL hasBytesUploaded;
@property (readonly, nonatomic) unsigned long long batchesUploaded;
@property (nonatomic) BOOL hasBatchesUploaded;
@property (readonly, nonatomic) unsigned long long batchesFailedToUpload;
@property (nonatomic) BOOL hasBatchesFailedToUpload;
@property (readonly, nonatomic) NSArray *latenciesInHours;
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
- (id)_latenciesInHoursJSONArray;
- (id)initWithEventsProcessed:(id)a0 eventsSkippedRedactedAtUpload:(id)a1 eventsUploaded:(id)a2 bytesUploaded:(id)a3 batchesUploaded:(id)a4 batchesFailedToUpload:(id)a5 latenciesInHours:(id)a6;

@end
