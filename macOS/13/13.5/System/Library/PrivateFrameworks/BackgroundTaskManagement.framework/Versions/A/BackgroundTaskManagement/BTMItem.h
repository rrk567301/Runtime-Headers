@class NSUUID, NSString, NSURL, NSArray, NSData, NSSet;

@interface BTMItem : NSObject <NSCopying, NSSecureCoding> {
    long long _type;
    NSString *_name;
    NSString *_developerName;
    BTMItem *_container;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSUUID *uuid;
@property (copy) NSString *identifier;
@property long long generation;
@property (retain) NSURL *url;
@property double modificationDate;
@property (copy) NSString *executablePath;
@property double executableModificationDate;
@property (copy) NSString *name;
@property (copy) NSString *developerName;
@property long long type;
@property (getter=isEditable) BOOL editable;
@property BOOL canHide;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSArray *associatedBundleIdentifiers;
@property (copy) NSString *teamIdentifier;
@property (copy) NSData *bookmark;
@property BOOL isResolvedURLStale;
@property (weak) BTMItem *container;
@property (copy) NSSet *embeddedItems;
@property (getter=isManaged) BOOL managed;
@property (getter=isAggregateManaged) BOOL aggregateManaged;
@property BOOL addedByProfile;
@property (readonly, copy) NSString *localizedName;
@property long long disposition;
@property (readonly) long long effectiveDisposition;
@property (getter=isEnabled) BOOL enabled;
@property (getter=isAllowed) BOOL allowed;
@property (getter=isAggregateAllowed) BOOL aggregateAllowed;
@property (getter=isHidden) BOOL hidden;
@property BOOL notified;
@property (getter=isAggregateNotified) BOOL aggregateNotified;
@property (getter=hasPendingAuthorization) BOOL pendingAuthorization;
@property (readonly) NSURL *resolvedURL;
@property (readonly) NSString *fullPath;
@property (copy, nonatomic) NSData *lightweightRequirement;
@property (readonly) NSURL *iconURL;
@property (readonly) BOOL isDaemon;
@property (readonly) BOOL containsDaemon;
@property (readonly) BOOL isUnknownDeveloper;
@property (readonly, nonatomic) BOOL isUnknownDeveloperRecord;
@property (readonly) BOOL isCurated;

+ (id)baseItemFromItemRecord:(id)a0;
+ (id)developerItemForItem:(id)a0;
+ (id)itemWithType:(long long)a0 identifier:(id)a1;
+ (id)itemWithType:(long long)a0 url:(id)a1;
+ (id)itemWithType:(long long)a0 url:(id)a1 identifier:(id)a2;
+ (id)itemWithType:(long long)a0 url:(id)a1 identifier:(id)a2 container:(id)a3;
+ (id)legacyAgentOrDaemonItemWithType:(long long)a0 URL:(id)a1 identifier:(id)a2 config:(id)a3 containerURL:(id *)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)intersectsType:(long long)a0 andIncludesType:(long long)a1;
- (BOOL)isType:(long long)a0;
- (BOOL)intersectsType:(long long)a0;
- (void)_initPropertiesWithURL:(id)a0 containerURL:(id)a1;
- (void)_setExecutableModificationDateFromURL:(id)a0;
- (id)_urlForBundleIdentifier:(id)a0;
- (void)addEmbeddedItemsObject:(id)a0;
- (unsigned long long)countOfEmbeddedItems;
- (id)enumeratorOfEmbeddedItems;
- (BOOL)executableModificationDateMatchesFileSystem;
- (BOOL)includesType:(long long)a0;
- (id)initWithType:(long long)a0 identifier:(id)a1;
- (id)initWithType:(long long)a0 url:(id)a1;
- (void)intersectEmbeddedItems:(id)a0;
- (BOOL)matchesType:(long long)a0;
- (id)memberOfEmbeddedItems:(id)a0;
- (BOOL)modificationDateMatchesFileSystem;
- (void)removeEmbeddedItemsObject:(id)a0;
- (BOOL)setExecutablePathFromLauncherTargetWithConfig:(id)a0;
- (id)setPropertiesWithBTMConfig:(id)a0;
- (BOOL)syncURLAndBookmark;

@end
