@class NSUUID, NSString, NSArray, REMObjectID, NSDate, REMAccountCapabilities, REMMemberships, NSSet, REMColor, NSData, REMResolutionTokenMap, REMManualOrdering;

@interface REMSmartListStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMObjectStorageSupportedVersionProviding> {
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
    long long minimumSupportedVersion;
    long long effectiveMinimumSupportedVersion;
}

@property (class, readonly) char supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) REMAccountCapabilities *accountCapabilities;
@property (retain, nonatomic) REMObjectID *objectID;
@property (copy, nonatomic) NSString *smartListType;
@property (retain, nonatomic) REMManualOrdering *manualOrdering;
@property (copy, nonatomic) NSString *sortingStyle;
@property (copy, nonatomic) NSDate *pinnedDate;
@property (retain, nonatomic) NSUUID *mostRecentTargetTemplateIdentifier;
@property (nonatomic) char shouldUpdateSectionsOrdering;
@property (retain, nonatomic) NSArray *unsavedSectionIDsOrdering;
@property (retain, nonatomic) REMMemberships *unsavedMembershipsOfRemindersInSections;
@property (retain, nonatomic) NSSet *sectionIDsToUndelete;
@property (nonatomic) char showingLargeAttachments;
@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *parentAccountID;
@property (retain, nonatomic) REMObjectID *parentListID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) REMColor *color;
@property (retain, nonatomic) NSString *badgeEmblem;
@property (retain, nonatomic) NSData *filterData;
@property (nonatomic) char isPersisted;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isUnsupported;
- (unsigned long long)storeGeneration;
- (id)cdKeyToStorageKeyMap;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 smartListType:(id)a2;
- (id)optionalObjectID;
- (void)setEffectiveMinimumSupportedVersion:(long long)a0;
- (void)setMinimumSupportedVersion:(long long)a0;
- (void)setStoreGenerationIfNeeded:(unsigned long long)a0;

@end
