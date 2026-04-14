@class NSString;

@interface BMSafariBrowsingAssistantTrialExperiment : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *experiment_namespace;
@property (readonly, nonatomic) NSString *experiment_id;
@property (readonly, nonatomic) NSString *treatment_id;
@property (readonly, nonatomic) long long deployment_id;
@property (nonatomic) BOOL hasDeployment_id;
@property (readonly, nonatomic) int allocation_status;
@property (readonly, nonatomic) unsigned int compatibility_version;
@property (nonatomic) BOOL hasCompatibility_version;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)initWithExperiment_namespace:(id)a0 experiment_id:(id)a1 treatment_id:(id)a2 deployment_id:(id)a3 allocation_status:(int)a4 compatibility_version:(id)a5;

@end
