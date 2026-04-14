@interface UniqueMO : NSManagedObject

+ (id)defaultPropertiesToFetch;
+ (id)propertyForAging;
+ (id)aggregateAs;
+ (id)aggregateName;
+ (unsigned long long)defaultFetchMaxAge;
+ (id)getOrCreateBSS:(id)a0 andNetwork:(id)a1 withHasUpdatedNetwork:(BOOL *)a2 on:(id)a3;

- (id)description;

@end
