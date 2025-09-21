@class NSString, BMTrialNamespaceUpdatesNamespaceNamesList;

@interface BMTrialNamespaceUpdates : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMTrialNamespaceUpdatesNamespaceNamesList *NamespaceNames;
@property (readonly, nonatomic) int experimentStatus;
@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) NSString *deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;
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
- (id)initWithNamespaceNames:(id)a0 experimentStatus:(int)a1 userId:(id)a2 experimentId:(id)a3 deploymentId:(id)a4 treatmentId:(id)a5;

@end
