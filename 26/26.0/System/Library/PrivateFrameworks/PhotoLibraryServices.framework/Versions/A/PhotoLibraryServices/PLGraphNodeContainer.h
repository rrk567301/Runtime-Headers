@class NSSet, PLGraphNode, NSString;

@interface PLGraphNodeContainer : NSObject <PLContainsGraphNodes>

@property (class, readonly) NSSet *sortableKeys;
@property (class, readonly) NSSet *requiredNodeValueCodes;

@property (retain, nonatomic) PLGraphNode *sourceNode;
@property (readonly, nonatomic) long long externalIdentifier;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudDeleteState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newNodeContainerWithManagedObjectContext:(id)a0;
+ (id)newNodeContainerWithNode:(id)a0;
+ (void)prepareForDeletingIncomingEdge:(id)a0;
+ (void)prepareForDeletingOutgoingEdge:(id)a0;
+ (id)changeFlagKeysForNodeContainerKey:(id)a0;
+ (id)changeFlagsKeysByNodeContainerKey;
+ (id)defaultValueForRequiredNodeValueCode:(int)a0 forNode:(id)a1;
+ (void)didSaveWithNode:(id)a0;
+ (BOOL)needsConstraintConflictResolutionForNode:(id)a0;
+ (id)newNodeContainerWithNode:(id)a0 containerClass:(Class)a1;
+ (id)nodeContainerKeysByChangeFlagKey;
+ (void)prepareForDeletionWithNode:(id)a0;
+ (void)resolveConstraintConflictsForNode:(id)a0;
+ (void)validateAllKnownSubclassesWithManagedObjectContext:(id)a0;
+ (void)willInsertOutgoingEdge:(id)a0;
+ (void)willSaveWithNode:(id)a0;

- (id)initWithNode:(id)a0;
- (void).cxx_destruct;
- (void)updateChangeFlagsForNodeContainerKey:(id)a0;

@end
