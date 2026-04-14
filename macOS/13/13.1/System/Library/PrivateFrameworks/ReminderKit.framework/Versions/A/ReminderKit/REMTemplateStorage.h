@class NSDate, NSString, REMObjectID, REMTemplatePublicLink, NSData, REMAccountCapabilities, REMColor, REMResolutionTokenMap, REMTemplateConfiguration, REMManualOrdering;

@interface REMTemplateStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMObjectStorageSupportedVersionProviding> {
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
    long long minimumSupportedVersion;
    long long effectiveMinimumSupportedVersion;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) REMAccountCapabilities *accountCapabilities;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *parentAccountID;
@property (retain, nonatomic) REMTemplateConfiguration *configuration;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) REMColor *color;
@property (copy, nonatomic) NSString *badgeEmblem;
@property (nonatomic) BOOL showingLargeAttachments;
@property (copy, nonatomic) NSString *sortingStyle;
@property (retain, nonatomic) REMManualOrdering *unsavedManualOrdering;
@property (retain, nonatomic) NSDate *mostRecentPublicLinkUpdateRequestDate;
@property (retain, nonatomic) REMTemplatePublicLink *publicLink;
@property (nonatomic) BOOL isPersisted;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isUnsupported;
- (void)setMinimumSupportedVersion:(long long)a0;
- (unsigned long long)storeGeneration;
- (void)setEffectiveMinimumSupportedVersion:(long long)a0;
- (id)optionalObjectID;
- (void)setStoreGenerationIfNeeded:(unsigned long long)a0;
- (id)cdKeyToStorageKeyMap;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 name:(id)a2;

@end
