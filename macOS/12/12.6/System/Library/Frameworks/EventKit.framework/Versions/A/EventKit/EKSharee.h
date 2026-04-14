@class NSString, NSDictionary, NSPredicate, NSURL, NSManagedObjectID;

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol, EKProtocolMutableSharee>

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (nonatomic) unsigned long long shareeStatus;
@property (nonatomic) unsigned long long shareeAccessLevel;
@property (readonly, nonatomic) NSPredicate *contactPredicate;
@property (readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property (readonly, nonatomic) BOOL isCurrentUserForSharing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;

+ (Class)frozenClass;
+ (unsigned long long)hashForObject:(id)a0;
+ (id)uniqueIdentifierForObject:(id)a0;
+ (id)knownIdentityKeys;
+ (id)knownSingleValueKeys;
+ (id)statusStringFromEnum:(unsigned long long)a0;
+ (id)accessLevelStringFromEnum:(unsigned long long)a0;
+ (id)shareeWithName:(id)a0 url:(id)a1;
+ (unsigned long long)accessLevelEnumFromString:(id)a0;
+ (unsigned long long)statusEnumFromString:(id)a0;
+ (id)shareeWithName:(id)a0 emailAddress:(id)a1;
+ (id)shareeWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2;
+ (id)shareeWithName:(id)a0 phoneNumber:(id)a1;

- (void).cxx_destruct;
- (id)status;
- (id)firstName;
- (id)contactPredicate;
- (void)setStatus:(id)a0;
- (id)lastName;
- (id)accessLevel;
- (void)setAccessLevel:(id)a0;
- (id)initWithObject:(id)a0 createPartialBackingObject:(BOOL)a1 keepBackingObject:(BOOL)a2 preFrozenRelationshipObjects:(id)a3 additionalFrozenProperties:(id)a4;
- (id)existingContact;
- (id)newContact;
- (id)initWithName:(id)a0 url:(id)a1;
- (id)ABPersonInAddressBook:(id)a0;
- (id)backingSharee;

@end
