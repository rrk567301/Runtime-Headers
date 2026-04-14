@interface PHMomentList : PHCollectionList

+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)managedEntityName;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (BOOL)managedObjectSupportsTrashedState;

- (id)description;
- (id)localizedTitle;
- (BOOL)hasLocalizedTitle;
- (BOOL)hasLocationInfo;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (BOOL)collectionHasFixedOrder;
- (Class)changeRequestClass;
- (long long)collectionListType;
- (id)localizedLocationNames;

@end
