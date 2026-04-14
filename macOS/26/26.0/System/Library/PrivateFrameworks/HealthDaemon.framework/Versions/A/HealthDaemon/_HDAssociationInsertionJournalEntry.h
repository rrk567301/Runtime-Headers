@class NSUUID, NSArray, NSData, HDAssociatableObjectReference, NSDate;

@interface _HDAssociationInsertionJournalEntry : HDJournalEntry

@property (readonly, nonatomic) NSUUID *parentUUID;
@property (readonly, nonatomic) NSData *childUUIDsData;
@property (readonly, nonatomic) NSArray *childIDs;
@property (readonly, nonatomic) long long provenance;
@property (readonly, nonatomic) long long syncIdentity;
@property (readonly, nonatomic) BOOL enforceSameSource;
@property (readonly, nonatomic) HDAssociatableObjectReference *destinationSubObjectReference;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long behavior;
@property (readonly, nonatomic) BOOL deleted;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) unsigned long long insertionType;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithParentUUID:(id)a0 childIDs:(id)a1 provenance:(long long)a2 syncIdentity:(long long)a3 type:(unsigned long long)a4 behavior:(unsigned long long)a5 creationDate:(id)a6 destinationSubObjectReference:(id)a7;
- (id)initWithParentUUID:(id)a0 childUUIDsData:(id)a1 provenance:(long long)a2 syncIdentity:(long long)a3 type:(unsigned long long)a4 behavior:(unsigned long long)a5 deleted:(BOOL)a6 creationDate:(id)a7 destinationSubObjectReference:(id)a8 enforceSameSource:(BOOL)a9;

@end
