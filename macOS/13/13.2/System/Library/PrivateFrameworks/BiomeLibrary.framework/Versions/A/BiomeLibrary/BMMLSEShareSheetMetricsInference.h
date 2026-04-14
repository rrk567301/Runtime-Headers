@class NSString, NSArray;

@interface BMMLSEShareSheetMetricsInference : BMEventBase <BMStoreData>

@property (readonly, nonatomic) long long identifier;
@property (nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) NSString *source_bundle_id;
@property (readonly, nonatomic) NSArray *inferences;
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
- (id)initWithIdentifier:(id)a0 source_bundle_id:(id)a1 inferences:(id)a2;

@end
