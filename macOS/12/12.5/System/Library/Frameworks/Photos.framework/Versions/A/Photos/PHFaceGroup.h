@interface PHFaceGroup : PHObject

@property (readonly, nonatomic) long long personModelId;
@property (readonly, nonatomic) long long personBuilderState;
@property (readonly, nonatomic) long long unnamedFaceCount;

+ (id)managedEntityName;
+ (id)fetchType;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (id)identifierCode;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)fetchFaceGroupsWithOptions:(id)a0;
+ (id)fetchFaceGroupsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchFaceGroupsForPerson:(id)a0 options:(id)a1;
+ (id)fetchFaceGroupsWithFace:(id)a0 options:(id)a1;
+ (id)fetchFaceGroupsGroupedByFaceLocalIdentifierForFaces:(id)a0 options:(id)a1;
+ (id)fetchEmptyFaceGroupsWithOptions:(id)a0;

- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (Class)changeRequestClass;
- (long long)getPersonModelId;

@end
