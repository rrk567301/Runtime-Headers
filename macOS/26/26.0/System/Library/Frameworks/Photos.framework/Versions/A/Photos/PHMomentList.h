@interface PHMomentList : PHCollectionList

+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;

- (id)localizedTitle;
- (id)description;
- (BOOL)hasLocationInfo;
- (BOOL)hasLocalizedTitle;
- (Class)changeRequestClass;
- (BOOL)collectionHasFixedOrder;
- (long long)collectionListType;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (id)localizedLocationNames;

@end
