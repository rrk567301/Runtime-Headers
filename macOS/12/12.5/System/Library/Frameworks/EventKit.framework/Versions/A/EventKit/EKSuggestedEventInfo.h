@class NSString, NSDate;

@interface EKSuggestedEventInfo : EKObject

@property (nonatomic) unsigned long long changedFields;
@property (readonly, copy, nonatomic) NSString *opaqueKey;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSDate *timestampAsDate;
@property (readonly, copy, nonatomic) NSString *uniqueKey;

+ (Class)frozenClass;
+ (id)uniqueIdentifierForObject:(id)a0;
+ (id)knownIdentityKeys;
+ (id)knownSingleValueKeys;
+ (BOOL)isDerivedRelationship;

- (void).cxx_destruct;
- (id)initWithEventStore:(id)a0 opaqueKey:(id)a1 uniqueKey:(id)a2 extractionGroupIdentifier:(id)a3;
- (id)initWithObject:(id)a0 createPartialBackingObject:(BOOL)a1 keepBackingObject:(BOOL)a2 preFrozenRelationshipObjects:(id)a3 additionalFrozenProperties:(id)a4;
- (id)initWithOpaqueKey:(id)a0 uniqueKey:(id)a1 extractionGroupIdentifier:(id)a2;
- (id)initWithOpaqueKey:(id)a0 uniqueKey:(id)a1;

@end
