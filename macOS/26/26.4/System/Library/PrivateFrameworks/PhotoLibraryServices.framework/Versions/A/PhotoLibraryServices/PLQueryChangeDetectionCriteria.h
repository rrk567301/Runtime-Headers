@class NSMutableDictionary;

@interface PLQueryChangeDetectionCriteria : NSObject {
    NSMutableDictionary *_attributeKeyPathsByEntityNameAffectingFetchResult;
    NSMutableDictionary *_relationshipKeyPathsByEntityNameAffectingFetchResult;
}

@property (readonly) BOOL isEmpty;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)addAttributeKeyPath:(id)a0 forEntityName:(id)a1;
- (void)addRelationshipKeyPath:(id)a0 forEntityName:(id)a1;
- (void)enumerateEntitiesAndAttributesUsingBlock:(id /* block */)a0;
- (void)enumerateEntitiesAndRelationshipsUsingBlock:(id /* block */)a0;

@end
