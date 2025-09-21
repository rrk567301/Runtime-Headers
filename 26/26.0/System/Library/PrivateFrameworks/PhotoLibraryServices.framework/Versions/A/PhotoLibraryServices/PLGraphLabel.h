@class NSData, NSString, PLGraphBitset;

@interface PLGraphLabel : PLManagedObject

@property (nonatomic) int code;
@property (retain, nonatomic) NSData *nodeExternalIdentifierDataHavingLabel;
@property (retain, nonatomic) NSData *edgeExternalIdentifierDataHavingLabel;
@property (readonly, copy, nonatomic) NSString *alias;
@property (readonly, nonatomic) PLGraphBitset *nodeExternalIdentifiersHavingLabel;
@property (readonly, nonatomic) PLGraphBitset *edgeExternalIdentifiersHavingLabel;

+ (id)entityName;
+ (id)_assignmentForLabel:(id)a0 onLabelableObject:(id)a1 createIfMissing:(BOOL)a2;
+ (id)_fetchExternalIdentifiersHavingLabel:(id)a0 forEntityClass:(Class)a1;
+ (id)_generateBitsetUsingFetchForLabel:(id)a0 forClass:(Class)a1;
+ (id)_generateBitsetUsingObjectGraphFromPrimaryLabelsKey:(id)a0 additionalLabelsKey:(id)a1 forLabel:(id)a2;
+ (id)_insertBuiltInLabelWithCode:(int)a0 inManagedObjectContext:(id)a1;
+ (id)_insertLabelWithAlias:(id)a0 inManagedObjectContext:(id)a1;
+ (BOOL)_needsLabelUpdateCheckFromGlobalValues:(id)a0;
+ (void)addLabel:(id)a0 toLabelableObject:(id)a1;
+ (id)additionalLabelsFromLabelableObject:(id)a0;
+ (void)ensureLabelsAreUpdatedInContext:(id)a0;
+ (id)fetchBuiltInLabelWithCode:(int)a0 inContext:(id)a1;
+ (id)fetchLabelWithAlias:(id)a0 inContext:(id)a1 createIfMissing:(BOOL)a2;
+ (BOOL)labelableObject:(id)a0 hasLabel:(id)a1;
+ (BOOL)labelableObject:(id)a0 hasLabelWithCode:(int)a1;
+ (void)removeLabel:(id)a0 fromLabelableObject:(id)a1;
+ (void)setAdditionalLabels:(id)a0 onLabelableObject:(id)a1;
+ (void)setPrimaryLabel:(id)a0 onLabelableObject:(id)a1;

- (void)willSave;
- (id)debugDescription;
- (BOOL)validateForDelete:(id *)a0;
- (void).cxx_destruct;
- (void)clearBitsetData;
- (BOOL)_removeFromAdditionalLabelsOnAllObjectsWithError:(id *)a0 assignmentEntityName:(id)a1;
- (void)handleAddOrRemoveOfBitsetTrackedObject:(id)a0 isAdd:(BOOL)a1;
- (BOOL)removeFromAdditionalLabelsOnAllEdgesWithError:(id *)a0;
- (BOOL)removeFromAdditionalLabelsOnAllNodesWithError:(id *)a0;

@end
