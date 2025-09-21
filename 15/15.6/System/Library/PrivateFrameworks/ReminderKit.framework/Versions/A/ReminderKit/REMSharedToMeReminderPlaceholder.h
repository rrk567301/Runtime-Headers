@class NSArray, NSString, REMObjectID;

@interface REMSharedToMeReminderPlaceholder : NSObject <_REMDAChangeTrackableModel, REMDAChangeTrackableModel, NSSecureCoding, NSCopying, REMObjectIDProviding>

@property (class, readonly, nonatomic) char rem_DA_supportsFetching;
@property (class, readonly, nonatomic) char rem_DA_supportsConcealedObjects;
@property (class, readonly, nonatomic) NSArray *rem_DA_propertiesAffectingIsConcealed;
@property (class, readonly, nonatomic) id /* block */ rem_DA_fetchByObjectIDBlock;
@property (class, readonly, nonatomic) id /* block */ rem_DA_fetchByObjectIDsBlock;
@property (class, readonly, nonatomic) id /* block */ rem_DA_deletedKeyFromTombstoneBlock;
@property (class, readonly, nonatomic) id /* block */ rem_DA_deletedKeyFromConcealedModelObjectBlock;
@property (class, readonly) char supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *remObjectID;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;
+ (char)isChangeTrackableModel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectIdentifier;
- (id)initWithObjectID:(id)a0 accountID:(id)a1;
- (char)isEqualToSharedToMeReminderPlaceholder:(id)a0;

@end
