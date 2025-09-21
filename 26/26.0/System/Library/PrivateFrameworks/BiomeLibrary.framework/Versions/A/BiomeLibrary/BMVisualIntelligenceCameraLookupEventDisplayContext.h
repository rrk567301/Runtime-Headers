@class NSString, NSArray;

@interface BMVisualIntelligenceCameraLookupEventDisplayContext : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *visualLookupSessionId;
@property (readonly, nonatomic) NSString *pillSessionId;
@property (readonly, nonatomic) NSArray *visualComponents;
@property (readonly, nonatomic) int totalResultsShown;
@property (nonatomic) BOOL hasTotalResultsShown;
@property (readonly, nonatomic) int started;
@property (readonly, nonatomic) int ended;
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
- (id)_visualComponentsJSONArray;
- (id)initWithVisualLookupSessionId:(id)a0 pillSessionId:(id)a1 visualComponents:(id)a2 totalResultsShown:(id)a3 started:(int)a4 ended:(int)a5;

@end
