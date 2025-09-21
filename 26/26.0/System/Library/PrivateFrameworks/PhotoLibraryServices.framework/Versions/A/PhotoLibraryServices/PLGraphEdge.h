@class PLPerson, PLManagedAsset, PLMoment, NSSet, NSManagedObjectID, NSString, PLGraphNode, PLGraphLabel;

@interface PLGraphEdge : PLManagedObject <PLGraphEdgeModeledProperties, PLGraphLabelable, PLGraphContainsValues>

@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) long long externalIdentifier;
@property (retain, nonatomic) PLGraphLabel *primaryLabel;
@property (retain, nonatomic) NSSet *additionalLabelAssignments;
@property (retain, nonatomic) NSSet *values;
@property (retain, nonatomic) PLGraphNode *sourceNode;
@property (retain, nonatomic) PLGraphNode *targetNode;
@property (retain, nonatomic) PLManagedAsset *sourceAsset;
@property (retain, nonatomic) PLMoment *sourceMoment;
@property (retain, nonatomic) PLPerson *sourcePerson;
@property (retain, nonatomic) PLManagedAsset *targetAsset;
@property (retain, nonatomic) PLMoment *targetMoment;
@property (retain, nonatomic) PLPerson *targetPerson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int primaryLabelCode;
@property (retain, nonatomic) NSSet *additionalLabels;

+ (id)entityName;
+ (id)fetchEdgesWithExternalIdentifiers:(id)a0 inManagedObjectContext:(id)a1;
+ (id)insertGraphEdgeInContext:(id)a0 withPrimaryLabel:(id)a1;
+ (id)updatedEdgesInvolvingNode:(id)a0;

- (void)willSave;
- (BOOL)validateForUpdate:(id *)a0;
- (void)awakeFromInsert;
- (void)addValue:(id)a0;
- (BOOL)validateForInsert:(id *)a0;
- (void)removeValue:(id)a0;
- (void)prepareForDeletion;
- (void)setSourcePerson:(id)a0;
- (void)setTargetPerson:(id)a0;
- (void)removeLabel:(id)a0;
- (void)addLabel:(id)a0;
- (void)setPrimaryLabel:(id)a0;
- (void)setTargetAsset:(id)a0;
- (id)_sourceShortcut;
- (id)_targetShortcut;
- (void)setSourceAsset:(id)a0;
- (void)_clearSourceShortcuts;
- (void)_clearTargetShortcuts;
- (void)_setActorObject:(id)a0 withNodeKey:(id)a1 andShortcutKey:(id)a2;
- (long long)_sourceShortcutCount;
- (long long)_targetShortcutCount;
- (void)_updateShortcutWithKey:(id)a0 usingActorNode:(id)a1;
- (void)addEdgeValue:(id)a0;
- (BOOL)hasLabel:(id)a0;
- (BOOL)hasLabelWithCode:(int)a0;
- (void)removeEdgeValue:(id)a0;
- (void)setSourceMoment:(id)a0;
- (void)setSourceNode:(id)a0;
- (void)setTargetMoment:(id)a0;
- (void)setTargetNode:(id)a0;
- (id)valueWithCode:(int)a0;
- (id)valueWithCode:(int)a0 createIfMissing:(BOOL)a1;

@end
