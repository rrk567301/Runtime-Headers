@class NSString;

@interface BMPrivateCloudComputeRequestLogAttestation : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *attestationString;
@property (readonly, nonatomic) NSString *node;
@property (readonly, nonatomic) NSString *nodeState;
@property (readonly, nonatomic) NSString *attestationBundle;
@property (readonly, nonatomic) NSString *proxiedBy;
@property (readonly, nonatomic) BOOL requestExecutionLogFinalized;
@property (nonatomic) BOOL hasRequestExecutionLogFinalized;
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
- (id)initWithNode:(id)a0 nodeState:(id)a1 attestationBundle:(id)a2 proxiedBy:(id)a3 requestExecutionLogFinalized:(id)a4;

@end
