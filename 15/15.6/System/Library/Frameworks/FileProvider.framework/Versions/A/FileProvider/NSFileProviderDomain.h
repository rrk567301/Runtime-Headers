@class NSString, NSDictionary, NSData, NSError, NSUUID;

@interface NSFileProviderDomain : NSObject <NSSecureCoding, NSCopying> {
    NSData *_backingStoreIdentity;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *symLinkName;
@property (nonatomic) char containsPhotos;
@property (nonatomic) char isContentManaged;
@property (nonatomic) char userEnabled;
@property (nonatomic, getter=isDisconnected) char disconnected;
@property (retain, nonatomic, getter=_disconnectionReason, setter=_setDisconnectionReason:) NSString *disconnectionReason;
@property (nonatomic, getter=_disconnectionOptions, setter=_setDisconnectionOptions:) unsigned long long disconnectionOptions;
@property (retain, nonatomic) NSData *backingStoreIdentity;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *personaIdentifier;
@property (retain, nonatomic) NSString *spotlightDomainIdentifier;
@property (getter=isReplicated) char replicated;
@property (nonatomic) char isEnterpriseDomain;
@property (nonatomic) char isDataSeparatedDomain;
@property (nonatomic, getter=isEjectable) char ejectable;
@property (copy, nonatomic) NSDictionary *domainUserInfo;
@property (nonatomic) char readOnly;
@property (nonatomic, getter=isErasable) char erasable;
@property (nonatomic, getter=isHiddenByUser) char hiddenByUser;
@property (nonatomic) char owningApplicationIsHidden;
@property char supportsSearch;
@property unsigned long long replicatedKnownFolders;
@property (readonly, nonatomic) unsigned long long replicatingKnownFolders;
@property char supportsRemoteVersions;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *pathRelativeToDocumentStorage;
@property (getter=isHidden) char hidden;
@property unsigned long long testingModes;
@property char supportsSyncingTrash;
@property (readonly, nonatomic) NSUUID *volumeUUID;
@property (copy, nonatomic) NSDictionary *userInfo;
@property unsigned long long supportedKnownFolders;

+ (id)_userInfoAllowedClasses;
+ (id)domainFromPlistDictionary:(id)a0 identifier:(id)a1 volumeURL:(id)a2 replicatedByDefault:(char)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1;
- (id)plistDictionary;
- (void)copyValuesFromExistingDomain:(id)a0;
- (id)initWithDisplayName:(id)a0 userInfo:(id)a1 volumeURL:(id)a2;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 pathRelativeToDocumentStorage:(id)a2;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 pathRelativeToDocumentStorage:(id)a2 hidden:(char)a3;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 userInfo:(id)a2 volumeURL:(id)a3;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 userInfo:(id)a2 volumeURL:(id)a3 pathRelativeToDocumentStorage:(id)a4 hidden:(char)a5 replicated:(char)a6;
- (unsigned long long)replicatingKnownFolders;

@end
