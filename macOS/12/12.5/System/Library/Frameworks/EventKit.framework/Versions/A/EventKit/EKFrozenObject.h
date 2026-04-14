@class NSString, NSDictionary, NSManagedObjectID;

@interface EKFrozenObject : NSObject <EKFrozenMeltedPair, EKProtocolObject>

@property (nonatomic) BOOL isPartialObject;
@property (retain, nonatomic) NSManagedObjectID *managedObjectID;
@property (nonatomic) BOOL isNew;
@property (nonatomic) unsigned long long cachedHash;
@property (readonly, nonatomic) BOOL isFrozen;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *semanticIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;

+ (Class)meltedClass;
+ (id)propertiesUnavailableForPartialObjects;
+ (Class)frozenClass;
+ (id)frozenObjectForObject:(id)a0;
+ (id)frozenObjectForObject:(id)a0 preFrozenRelationshipObjects:(id)a1 forceUpdate:(BOOL)a2;
+ (id)frozenObjectForObject:(id)a0 createPartialObject:(BOOL)a1 preFrozenRelationshipObjects:(id)a2;
+ (id)frozenObjectForObject:(id)a0 createPartialObject:(BOOL)a1;
+ (id)frozenObjectForObject:(id)a0 createPartialObject:(BOOL)a1 preFrozenRelationshipObjects:(id)a2 forceUpdate:(BOOL)a3;
+ (Class)alternateUniverseClass;
+ (id)frozenObjectForObject:(id)a0 preFrozenRelationshipObjects:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)changeSet;
- (BOOL)isPropertyUnavailable:(id)a0;
- (Class)frozenClass;
- (id)meltedObjectInStore:(id)a0;
- (id)frozenObject;
- (id)initWithObject:(id)a0 createPartialObject:(BOOL)a1 preFrozenRelationshipObjects:(id)a2;
- (BOOL)isCompletelyEqual:(id)a0;
- (id)existingMeltedObject;
- (BOOL)isEqual:(id)a0 ignoringProperties:(id)a1;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (id)_getFrozenVersionsOfObjects:(id)a0 withFrozenType:(Class)a1;
- (id)initWithObject:(id)a0 createPartialObject:(BOOL)a1;

@end
