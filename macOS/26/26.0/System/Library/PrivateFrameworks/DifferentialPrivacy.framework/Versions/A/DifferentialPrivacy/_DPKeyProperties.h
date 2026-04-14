@class _DPPrivacyBudget, NSString, NSDictionary, _DPValueRange, NSNumber;

@interface _DPKeyProperties : NSObject

@property (readonly, nonatomic) unsigned long long dataAlgorithm;
@property (readonly, nonatomic) unsigned long long privatizationAlgorithm;
@property (readonly, nonatomic) unsigned long long transport;
@property (readonly, nonatomic) NSString *huffmanTableClass;
@property (readonly, copy, nonatomic) NSString *propertiesName;
@property (readonly, nonatomic) _DPValueRange *possibleRange;
@property (readonly, nonatomic) NSNumber *acceptableError;
@property (readonly, nonatomic) _DPValueRange *trimmedScale;
@property (readonly, copy, nonatomic) NSString *noiseDistribution;
@property (readonly, nonatomic) _DPPrivacyBudget *budget;
@property (readonly, nonatomic) NSNumber *privacyParameter;
@property (readonly, nonatomic) BOOL directUpload;
@property (readonly, copy, nonatomic) NSString *serverAlgorithmString;
@property (readonly, nonatomic) NSDictionary *parameterDictionary;
@property (readonly, nonatomic) unsigned long long submissionPriority;
@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) BOOL approvedForNonDNU;
@property (readonly, nonatomic) BOOL telemetryAllowed;
@property (readonly, nonatomic) unsigned long long transparencyLogLifetime;
@property (readonly, nonatomic) NSString *transparencyLogReportName;
@property (readonly, nonatomic) NSString *dataSource;

+ (id)keyPropertiesWithName:(id)a0 fromDictionary:(id)a1;
+ (void)initialize;
+ (id)keyPropertiesForName:(id)a0;
+ (id)parametersForAlgorithm:(id)a0 properties:(id)a1 epsilon:(id)a2;
+ (id)propertiesFromFile:(id)a0;
+ (id)privatizationAlgorithmStringFor:(unsigned long long)a0;

- (id)init;
- (id)description;
- (id)initWithPropertyName:(id)a0 dictionary:(id)a1;
- (id)privatizationAlgorithmString;
- (void).cxx_destruct;

@end
