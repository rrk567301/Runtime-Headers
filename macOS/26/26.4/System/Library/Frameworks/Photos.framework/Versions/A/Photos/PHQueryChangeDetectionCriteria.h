@class NSMutableDictionary;

@interface PHQueryChangeDetectionCriteria : NSObject <NSCopying> {
    NSMutableDictionary *_attributeIndexValuesByEntityName;
    NSMutableDictionary *_relationshipIndexValuesByEntityName;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)changeDetectionCriteriaByAddingChangeDetectionCriteria:(id)a0;
- (void)enumerateEntitiesAndAttributeIndexesUsingBlock:(id /* block */)a0;
- (void)enumerateEntitiesAndRelationshipIndexesBlock:(id /* block */)a0;
- (id)initWithPLQueryChangeDetectionCriteria:(id)a0;

@end
