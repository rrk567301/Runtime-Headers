@class NSString, NSArray, NSDictionary, NSDate;

@interface SFShareSheetSessionTestingSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSString *applicationBundleID;
@property (readonly, nonatomic) int pid;
@property (copy, nonatomic) NSArray *installedExtensions;
@property (copy, nonatomic) NSDictionary *systemAppsAvailable;
@property (copy, nonatomic) NSDictionary *modeSnapshots;
@property (readonly, copy, nonatomic) NSArray *itemDescriptions;

+ (id)dateFormatter;
+ (char)_itemDescriptions:(id)a0 match:(id)a1;
+ (id)_jsonifyItems:(id)a0;
+ (id)codableDataStringForItem:(id)a0;
+ (id)codableItemFromDescription:(id)a0;
+ (id)descriptionForItem:(id)a0;
+ (id)loadSnapshotFromURL:(id)a0 error:(id *)a1;
+ (id)snapshotsDirectory;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)filename;
- (char)hasSameResults:(id)a0;
- (id)checkSystemAppsAvailability;
- (char)currentProcessHasAppRecordEntitlement;
- (char)currentProcessHasExtensionDiscoveryEntitlements;
- (id)discoverInstalledExtensions;
- (char)hasSamePreconditions:(id)a0;
- (id)initWithItems:(id)a0 applicationBundleID:(id)a1 pid:(int)a2;
- (id)initWithJSONInfo:(id)a0;
- (id)jsonInfo;
- (id)modeKeyForCollaboration:(char)a0;
- (id)modeSnapshotForCollaboration:(char)a0;
- (void)updateFromSnapshot:(id)a0;
- (void)updateModeSnapshot:(id)a0 forCollaboration:(char)a1;
- (void)updatePreconditionsIfNeeded;
- (void)updateWithDiscoveredShareActivities:(id)a0 visibleShareActivities:(id)a1 actionActivities:(id)a2 visibleActionActivities:(id)a3 forCollaboration:(char)a4;
- (void)updateWithFinalItems:(id)a0 forActivityType:(id)a1 forCollaboration:(char)a2;
- (void)updateWithPeopleSuggestionActivityTypes:(id)a0 forCollaboration:(char)a1;
- (void)updateWithPlaceholderItems:(id)a0 collaborationItem:(id)a1 supportsCollaboration:(char)a2 supportsSendCopy:(char)a3;
- (void)writeSnapshotWithCompletionHandler:(id /* block */)a0;

@end
