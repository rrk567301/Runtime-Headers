@class NSString, BMSpanEvent;

@interface BMMLSEShareSheetMetricsSystemResourceUsage : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) int userType;
@property (readonly, nonatomic) BOOL timeoutOccured;
@property (nonatomic) BOOL hasTimeoutOccured;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *subidentifier;
@property (readonly, nonatomic) BMSpanEvent *softwareTracing;
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
- (id)initWithSoftwareTracing:(id)a0;

@end
