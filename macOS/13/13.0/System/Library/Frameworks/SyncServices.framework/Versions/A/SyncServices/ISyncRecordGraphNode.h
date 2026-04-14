@interface ISyncRecordGraphNode : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (int)changeType;
- (id)entityName;
- (id)parentNode;
- (id)record;
- (id)changedKeys;
- (void)setChangeType:(int)a0;
- (id)recordIdentifier;
- (id)identityKeys;
- (id)recordView;
- (id)relationshipNames;
- (id)dependenciesForPropertyName:(id)a0;
- (id)displayKeys;
- (id)addedChildNodesByRelationship;
- (id)modifiedChildNodesByRelationship;
- (id)deletedChildNodesByRelationship;
- (id)childNodesByRecordIdentifier;
- (id)topLevelParentNode;
- (id)initWithRecordView:(id)a0 recordIdentifier:(id)a1;
- (void)setDisplayKeys:(id)a0;
- (void)setChangedKeys:(id)a0;
- (id)orderedSubentityIdsFromIds:(id)a0 usingEntityNames:(id)a1;
- (id)orderedSubentityIdsFromIds:(id)a0 usingEntityNames:(id)a1 defaultOrder:(id)a2;
- (id)orderedSubentityIdsFromIds:(id)a0 usingEntityNames:(id)a1 isAdd:(BOOL)a2;

@end
