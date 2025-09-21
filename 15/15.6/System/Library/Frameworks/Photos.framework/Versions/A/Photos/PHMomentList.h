@interface PHMomentList : PHCollectionList

+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (char)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;

- (id)description;
- (id)localizedTitle;
- (char)hasLocationInfo;
- (char)hasLocalizedTitle;
- (Class)changeRequestClass;
- (char)collectionHasFixedOrder;
- (long long)collectionListType;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (id)localizedLocationNames;

@end
