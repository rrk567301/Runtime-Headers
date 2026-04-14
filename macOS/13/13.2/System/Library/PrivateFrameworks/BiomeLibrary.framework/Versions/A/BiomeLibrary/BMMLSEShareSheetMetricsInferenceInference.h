@class NSString;

@interface BMMLSEShareSheetMetricsInferenceInference : BMEventBase <BMStoreData>

@property (readonly, nonatomic) long long identifier;
@property (nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) NSString *transport_bundle_id;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) unsigned int rank;
@property (nonatomic) BOOL hasRank;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithIdentifier:(id)a0 transport_bundle_id:(id)a1 model:(id)a2 rank:(id)a3;

@end
