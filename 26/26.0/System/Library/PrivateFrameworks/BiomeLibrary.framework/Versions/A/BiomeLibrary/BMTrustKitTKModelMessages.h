@class NSString, NSArray;

@interface BMTrustKitTKModelMessages : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *signatureId;
@property (readonly, nonatomic) NSString *uafVersion;
@property (readonly, nonatomic) NSString *recordZone;
@property (readonly, nonatomic) NSArray *triggeredRules;
@property (readonly, nonatomic) NSArray *nemesisErrors;
@property (readonly, nonatomic) NSArray *filteringTriggeredRules;
@property (readonly, nonatomic) NSArray *filteringNemesisErrors;
@property (readonly, nonatomic) NSString *locale;
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
- (id)_filteringNemesisErrorsJSONArray;
- (id)_filteringTriggeredRulesJSONArray;
- (id)_nemesisErrorsJSONArray;
- (id)_triggeredRulesJSONArray;
- (id)initWithSignatureId:(id)a0 uafVersion:(id)a1 recordZone:(id)a2 triggeredRules:(id)a3 nemesisErrors:(id)a4 filteringTriggeredRules:(id)a5 filteringNemesisErrors:(id)a6 locale:(id)a7;

@end
