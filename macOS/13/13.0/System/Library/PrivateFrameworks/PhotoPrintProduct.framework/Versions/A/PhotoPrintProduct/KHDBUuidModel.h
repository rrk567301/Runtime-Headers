@class NSString;

@interface KHDBUuidModel : KHDBModel {
    NSString *_uuid;
}

+ (id)modelUuidsWhere:(id)a0;
+ (id)modelForUuid:(id)a0 fromDatabase:(id)a1;
+ (id)modelsForUuids:(id)a0 fromDatabase:(id)a1;
+ (id)modelUuidsFromDatabase:(id)a0 where:(id)a1 args:(id)a2;
+ (id)modelUuidsFromDatabase:(id)a0 where:(id)a1;
+ (id)modelUuidsFromQuery:(id)a0;
+ (id)modelForUuid:(id)a0;
+ (id)modelsForUuids:(id)a0;
+ (id)orderedModelsForUuids:(id)a0 fromDatabase:(id)a1;
+ (id)orderedModelsForUuids:(id)a0;
+ (id)modelIdForUuid:(id)a0 fromDatabase:(id)a1;
+ (id)modelIdForUuid:(id)a0;
+ (id)modelIdsForUuids:(id)a0 fromDatabase:(id)a1;
+ (id)modelIdsForUuids:(id)a0;
+ (id)modelIdListForUuids:(id)a0 fromDatabase:(id)a1;
+ (id)modelIdListForUuids:(id)a0;
+ (id)uuidsForModelIds:(id)a0 fromDatabase:(id)a1;
+ (id)uuidsForModelIds:(id)a0;
+ (id)uuidsForModels:(id)a0;

- (void)dealloc;
- (id)description;
- (id)uuid;
- (id)infoDictionary;
- (void)persist;
- (id)initWithUuid:(id)a0 forEntity:(id)a1;
- (id)initWithUuid:(id)a0 inDatabase:(id)a1;
- (id)initWithAddress:(id)a0 uuid:(id)a1 inDatabase:(id)a2;
- (void)cacheUuid:(id)a0;
- (id)infoDictionaryPath;

@end
