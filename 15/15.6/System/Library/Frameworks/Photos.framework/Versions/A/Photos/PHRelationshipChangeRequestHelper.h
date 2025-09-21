@class NSString, NSArray, PHChangeRequestHelper, NSMutableArray;

@interface PHRelationshipChangeRequestHelper : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *relationshipName;
@property (retain, nonatomic) NSString *destinationEntityName;
@property (retain, nonatomic) NSString *destinationUUIDKeyPath;
@property (nonatomic) char allowsInsert;
@property (nonatomic) char allowsMove;
@property (nonatomic) char allowsRemove;
@property (retain, nonatomic) NSArray *originalObjectIDs;
@property (retain, nonatomic) NSMutableArray *mutableObjectIDsAndUUIDs;
@property (copy, nonatomic) id /* block */ isDestinationObjectValid;
@property (retain, nonatomic) PHChangeRequestHelper *changeRequestHelper;

+ (id)_offsetsFromSourceOIDs:(id)a0 toManagedObjects:(id)a1;
+ (id)existentObjectIDsUsingQuery:(id)a0;
+ (id)objectIDsOrUUIDsFromPHObjects:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)applyMutationsToManagedObject:(id)a0 orderedMutableChildren:(id)a1 error:(id *)a2;
- (char)applyMutationsToManagedObject:(id)a0 unorderedMutableChildren:(id)a1 error:(id *)a2;
- (char)applyMutationsToManagedObject:(id)a0 unorderedMutableChildren:(id)a1 inserts:(id *)a2 deletes:(id *)a3 error:(id *)a4;
- (char)applyMutationsToManagedObjectToOneRelationship:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initWithRelationshipName:(id)a0 changeRequestHelper:(id)a1;
- (id)initWithRelationshipName:(id)a0 xpcDict:(id)a1 changeRequestHelper:(id)a2;
- (void)prepareIfNeededWithExistentObjectIDs:(id)a0;

@end
