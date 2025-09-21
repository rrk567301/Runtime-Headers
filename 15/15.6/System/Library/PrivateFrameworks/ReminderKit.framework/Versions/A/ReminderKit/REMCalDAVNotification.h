@class NSArray, NSString, NSURL, REMObjectID;

@interface REMCalDAVNotification : NSObject <_REMDAChangeTrackableModel, REMDAChangeTrackableModel, REMExternalSyncMetadataWritableProviding, NSSecureCoding, NSCopying, REMObjectIDProviding, REMExternalSyncMetadataProviding>

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
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSURL *hostURL;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *listID;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;
@property (readonly, nonatomic) REMObjectID *remObjectID;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;
+ (char)isChangeTrackableModel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initCalDAVNotificationWithObjectID:(id)a0 accountID:(id)a1 listID:(id)a2 uuidString:(id)a3 hostURL:(id)a4 externalIdentifier:(id)a5 externalModificationTag:(id)a6;
- (char)shouldUseExternalIdentifierAsDeletionKey;

@end
