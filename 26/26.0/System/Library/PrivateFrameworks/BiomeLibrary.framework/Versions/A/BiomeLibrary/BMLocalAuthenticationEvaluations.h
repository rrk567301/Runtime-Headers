@class BMLocalAuthenticationEvaluationsMechanism, NSString;

@interface BMLocalAuthenticationEvaluations : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int policy;
@property (nonatomic) BOOL hasPolicy;
@property (readonly, nonatomic) int result;
@property (nonatomic) BOOL hasResult;
@property (readonly, nonatomic) BMLocalAuthenticationEvaluationsMechanism *biometry;
@property (readonly, nonatomic) BMLocalAuthenticationEvaluationsMechanism *passcode;
@property (readonly, nonatomic) int ratchetState;
@property (readonly, nonatomic) int ratchetArmingState;
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
- (id)initWithPolicy:(id)a0 result:(id)a1 biometry:(id)a2 passcode:(id)a3 ratchetState:(int)a4 callerBundleId:(id)a5;
- (id)initWithPolicy:(id)a0 result:(id)a1 biometry:(id)a2 passcode:(id)a3 ratchetState:(int)a4 callerBundleId:(id)a5 ratchetArmingState:(int)a6;
- (id)initWithPolicy:(id)a0 result:(id)a1 biometry:(id)a2 passcode:(id)a3 ratchetState:(int)a4 ratchetArmingState:(int)a5;

@end
