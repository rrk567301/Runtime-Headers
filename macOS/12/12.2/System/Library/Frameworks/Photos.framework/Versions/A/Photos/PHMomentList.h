@interface PHMomentList : PHCollectionList

+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)identifierCode;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (BOOL)managedObjectSupportsTrashedState;

- (id)description;
- (id)localizedTitle;
- (BOOL)hasLocalizedTitle;
- (BOOL)hasLocationInfo;
- (BOOL)collectionHasFixedOrder;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (Class)changeRequestClass;
- (long long)collectionListType;
- (id)localizedLocationNames;

@end
