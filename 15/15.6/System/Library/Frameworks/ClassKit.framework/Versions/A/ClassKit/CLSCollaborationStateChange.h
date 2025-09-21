@class NSString, NSSet, NSMutableSet, NSMutableArray;

@interface CLSCollaborationStateChange : CLSObject

@property (copy, nonatomic) NSString *targetObjectID;
@property (copy, nonatomic) NSString *targetEntityName;
@property (copy, nonatomic) NSString *ownerPersonID;
@property (copy, nonatomic) NSString *senderPersonID;
@property (copy, nonatomic) NSString *targetClassID;
@property (copy, nonatomic) NSMutableSet *changedDomains;
@property (copy, nonatomic) NSSet *deletedDomains;
@property (copy, nonatomic) NSMutableArray *states;
@property (copy, nonatomic) NSString *recipientPersonID;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (char)hasChanges;
- (char)addValidStates:(id)a0;
- (id)stateForDomain:(long long)a0;
- (char)validateObject:(id *)a0;
- (char)_addStateForDomain:(long long)a0 domainVersion:(long long)a1 state:(long long)a2 flags:(unsigned long long)a3 note:(id)a4 assetURL:(id)a5 assets:(id)a6;
- (char)addStateForDomain:(long long)a0 domainVersion:(long long)a1 state:(long long)a2 flags:(unsigned long long)a3 note:(id)a4 assetURL:(id)a5;
- (char)addStateForDomain:(long long)a0 domainVersion:(long long)a1 state:(long long)a2 flags:(unsigned long long)a3 note:(id)a4 assets:(id)a5;
- (char)addStates:(id)a0;
- (id)initWithObject:(id)a0 ownerPersonID:(id)a1 targetClassID:(id)a2 recipientPersonID:(id)a3;
- (void)mergeChangesFrom:(id)a0;
- (void)mergeWithObject:(id)a0;
- (void)removeStateForDomain:(long long)a0;
- (char)setAssetURL:(id)a0 forDomain:(long long)a1;
- (char)setClassID:(id)a0 forDomain:(long long)a1;
- (char)setDomainVersion:(long long)a0 forDomain:(long long)a1;
- (char)setFlags:(unsigned long long)a0 forDomain:(long long)a1;
- (char)setInfoValue:(id)a0 forKey:(id)a1 forDomain:(long long)a2;
- (char)setNote:(id)a0 forDomain:(long long)a1;
- (char)setState:(long long)a0 forDomain:(long long)a1;

@end
