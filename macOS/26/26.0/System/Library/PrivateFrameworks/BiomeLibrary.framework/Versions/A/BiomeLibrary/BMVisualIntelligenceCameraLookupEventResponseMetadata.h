@class NSString;

@interface BMVisualIntelligenceCameraLookupEventResponseMetadata : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL hasResultRetrieved;
@property (nonatomic) BOOL hasHasResultRetrieved;
@property (readonly, nonatomic) int endReason;
@property (readonly, nonatomic) int httpErrorCode;
@property (nonatomic) BOOL hasHttpErrorCode;
@property (readonly, nonatomic) int serverErrorCode;
@property (nonatomic) BOOL hasServerErrorCode;
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
- (id)initWithHasResultRetrieved:(id)a0 endReason:(int)a1 httpErrorCode:(id)a2 serverErrorCode:(id)a3;

@end
