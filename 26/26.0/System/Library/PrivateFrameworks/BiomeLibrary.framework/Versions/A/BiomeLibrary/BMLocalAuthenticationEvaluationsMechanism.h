@class NSString;

@interface BMLocalAuthenticationEvaluationsMechanism : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL available;
@property (nonatomic) BOOL hasAvailable;
@property (readonly, nonatomic) BOOL started;
@property (nonatomic) BOOL hasStarted;
@property (readonly, nonatomic) BOOL success;
@property (nonatomic) BOOL hasSuccess;
@property (readonly, nonatomic) BOOL lockout;
@property (nonatomic) BOOL hasLockout;
@property (readonly, nonatomic) unsigned int generation;
@property (nonatomic) BOOL hasGeneration;
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
- (id)initWithAvailable:(id)a0 started:(id)a1 success:(id)a2 lockout:(id)a3 generation:(id)a4;

@end
