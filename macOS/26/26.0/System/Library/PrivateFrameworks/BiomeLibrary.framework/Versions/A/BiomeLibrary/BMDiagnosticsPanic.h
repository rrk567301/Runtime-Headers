@class NSString;

@interface BMDiagnosticsPanic : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double captureTime;
@property (nonatomic) BOOL hasCaptureTime;
@property (readonly, nonatomic) NSString *incidentID;
@property (readonly, nonatomic) NSString *patternUUID;
@property (readonly, nonatomic) unsigned int patternType;
@property (nonatomic) BOOL hasPatternType;
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
- (id)initWithCaptureTime:(id)a0 incidentID:(id)a1 patternUUID:(id)a2 patternType:(id)a3;

@end
