@class PLLibraryScopeRule;

@interface PHLibraryScopeRule : NSObject <NSCopying>

@property (retain, nonatomic) PLLibraryScopeRule *proxyObject;
@property (readonly, nonatomic) PLLibraryScopeRule *plRepresentation;

+ (id)dataFromRules:(id)a0;
+ (id)fetchLibraryScopeRulesForLibraryScope:(id)a0 options:(id)a1;
+ (id)suggestedStartDateForRules:(id)a0 autoSharePolicy:(short)a1 options:(id)a2 error:(id *)a3;
+ (unsigned long long)estimatedAssetCountForRules:(id)a0 autoSharePolicy:(short)a1 imageCount:(unsigned long long *)a2 videoCount:(unsigned long long *)a3 audioCount:(unsigned long long *)a4 itemCount:(unsigned long long *)a5 options:(id)a6 error:(id *)a7;
+ (id)_estimatedAssetsForRules:(id)a0 autoSharePolicy:(short)a1 options:(id)a2 error:(id *)a3;
+ (BOOL)generateDefaultRulesForLibraryScope:(id)a0 options:(id)a1 error:(id *)a2;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithQuery:(id)a0;
- (void)addCondition:(id)a0;
- (id)initWithProxyObject:(id)a0;
- (void)removeConditionOfType:(Class)a0;
- (id)dateRangeCondition;
- (id)personCondition;
- (id)unknownConditions;

@end
