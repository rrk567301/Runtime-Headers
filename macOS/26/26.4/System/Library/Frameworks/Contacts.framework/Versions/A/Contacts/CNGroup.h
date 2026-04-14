@class NSString, NSData, NSDate;

@interface CNGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    CNGroup *_snapshot;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *externalURI;
@property (readonly, copy) NSString *externalIdentifier;
@property (readonly, copy) NSData *externalRepresentation;
@property (readonly, copy) NSString *externalModificationTag;
@property (readonly, copy) NSString *externalUUID;
@property (readonly, copy, nonatomic) CNGroup *snapshot;
@property (readonly) int iOSLegacyIdentifier;
@property (readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSDate *modificationDate;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *name;

+ (id)identifierProvider;
+ (id)makeIdentifier;
+ (id)predicateForGroupsWithNameMatching:(id)a0;
+ (id)predicateForGroupsWithMemberContact:(id)a0 includeAllParentGroups:(BOOL)a1;
+ (id)_predicateForNonHiddenGroups;
+ (id)predicateForGroupsInContainerWithIdentifier:(id)a0;
+ (id)makeIdentifierString;
+ (id)predicateForGroupsWithMemberGroup:(id)a0 includeAllParentGroups:(BOOL)a1;
+ (id)predicateForAllGroups;
+ (id)predicateForSubgroupsInGroupWithIdentifier:(id)a0;
+ (id)predicateForGroupsWithIdentifiers:(id)a0;
+ (id)localizedStringForKey:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithGroup:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1;
- (id)initWithIdentifier:(id)a0 name:(id)a1 creationDate:(id)a2 modificationDate:(id)a3 iOSLegacyIdentifier:(int)a4;

@end
