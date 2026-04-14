@class NSString, NSDictionary, NSData, NSError;

@interface NSFileProviderDomain : NSObject <NSSecureCoding, NSCopying> {
    NSData *_backingStoreIdentity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *symLinkName;
@property (nonatomic) BOOL containsPhotos;
@property (nonatomic) BOOL isContentManaged;
@property (nonatomic) BOOL userEnabled;
@property (nonatomic, getter=isDisconnected) BOOL disconnected;
@property (retain, nonatomic, getter=_disconnectionReason, setter=_setDisconnectionReason:) NSString *disconnectionReason;
@property (nonatomic, getter=_disconnectionOptions, setter=_setDisconnectionOptions:) unsigned long long disconnectionOptions;
@property (retain, nonatomic) NSData *backingStoreIdentity;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *personaIdentifier;
@property (getter=isReplicated) BOOL replicated;
@property (nonatomic) BOOL isEnterpriseDomain;
@property (nonatomic) BOOL isDataSeparatedDomain;
@property (nonatomic, getter=isEjectable) BOOL ejectable;
@property (copy, nonatomic) NSDictionary *domainUserInfo;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *pathRelativeToDocumentStorage;
@property (getter=isHidden) BOOL hidden;
@property unsigned long long testingModes;
@property BOOL supportsSyncingTrash;

+ (id)domainFromPlistDictionary:(id)a0 identifier:(id)a1 replicatedByDefault:(BOOL)a2;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 pathRelativeToDocumentStorage:(id)a2;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 pathRelativeToDocumentStorage:(id)a2 hidden:(BOOL)a3;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 pathRelativeToDocumentStorage:(id)a2 hidden:(BOOL)a3 replicated:(BOOL)a4;
- (id)plistDictionary;
- (void)copyValuesFromExistingDomain:(id)a0;

@end
