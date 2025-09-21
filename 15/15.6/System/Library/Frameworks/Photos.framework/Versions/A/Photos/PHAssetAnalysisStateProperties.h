@class NSMutableDictionary;

@interface PHAssetAnalysisStateProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSMutableDictionary *fetchDictionariesByWorkerType;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (char)isToMany;
+ (id)propertySetName;
+ (char)createsPropertySetObjectWithCustomImplementation;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (void).cxx_destruct;
- (int)analysisStateForWorkerType:(short)a0 outLastIgnoreDate:(id *)a1 outIgnoreUntilDate:(id *)a2;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(char)a2;

@end
