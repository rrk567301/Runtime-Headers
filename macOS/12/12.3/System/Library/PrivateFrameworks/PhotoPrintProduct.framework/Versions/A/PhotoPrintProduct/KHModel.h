@class NSString, KHThemeDatabase;
@protocol KHBehaviorCacheProtocol;

@interface KHModel : KHDBUuidModel <KHJSONGeneratorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) KHThemeDatabase *themeDB;
@property (readonly, nonatomic) id<KHBehaviorCacheProtocol> behaviorCache;

+ (id)selectDistinct:(id)a0 where:(id)a1;
+ (void)setDefaultDatabase:(unsigned long long)a0 forClass:(Class)a1;
+ (unsigned long long)_databaseCodeForModelClass:(Class)a0;
+ (id)_databaseForCode:(unsigned long long)a0;
+ (id)_defaultDatabase;
+ (void)deleteModelsWhere:(id)a0;
+ (id)modelForId:(id)a0;
+ (id)modelsForIds:(id)a0;
+ (id)modelsForIdList:(id)a0;
+ (id)modelsWhere:(id)a0;
+ (id)anyModelWhere:(id)a0;
+ (id)selectOneObject:(id)a0 where:(id)a1;
+ (id)select:(id)a0 orderedBy:(id)a1 where:(id)a2;
+ (void)updateColumn:(id)a0 toValue:(id)a1 where:(id)a2;
+ (id)dictionaryForKey:(id)a0 value:(id)a1 where:(id)a2;
+ (id)dictionaryOfSetsForKey:(id)a0 value:(id)a1 defaultValue:(id)a2 where:(id)a3;
+ (id)nestedDictionariesForOuterKey:(id)a0 innerKey:(id)a1 value:(id)a2 where:(id)a3;
+ (id)modelUuidsWhere:(id)a0;
+ (id)modelIdsWhere:(id)a0;
+ (id)modelIdListWhere:(id)a0;
+ (void)insertIntoRidList:(id)a0 idsForColumn:(id)a1 where:(id)a2;
+ (unsigned long long)countOfModelsWhere:(id)a0;
+ (BOOL)modelExistsWhere:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)uuid;
- (void)setUuid:(id)a0;
- (id)dictionaryRepresentation;
- (void)setValuesForKeysWithDictionary:(id)a0;
- (void)commonInit;
- (void)encodeWithDictionary:(id)a0;
- (id)JSONDictionary;
- (void)persist;
- (id)JSONRepresentation;
- (BOOL)isProjectModel;
- (id)initWithModelId:(id)a0 inDatabase:(id)a1;
- (id)initWithModelId:(id)a0;
- (id)themeBundle;
- (BOOL)isSimilarToModel:(id)a0 skippingFields:(id)a1 differences:(id *)a2;

@end
