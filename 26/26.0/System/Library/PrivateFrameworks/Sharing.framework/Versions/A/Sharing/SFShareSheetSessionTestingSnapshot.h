@class NSString, NSArray, NSDictionary, NSDate;

@interface SFShareSheetSessionTestingSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSString *applicationBundleID;
@property (readonly, nonatomic) int pid;
@property (copy, nonatomic) NSArray *installedExtensions;
@property (copy, nonatomic) NSDictionary *systemAppsAvailable;
@property (copy, nonatomic) NSDictionary *modeSnapshots;
@property (readonly, copy, nonatomic) NSArray *itemDescriptions;

+ (id)dateFormatter;
+ (id)descriptionForItem:(id)a0;
+ (id)_jsonifyItems:(id)a0;
+ (id)loadSnapshotFromURL:(id)a0 error:(id *)a1;
+ (id)snapshotsDirectory;

- (id)filename;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)canTestFinalItemsForActivityType:(id)a0 forCollaboration:(BOOL)a1;
- (BOOL)canTestModeForCollaboration:(BOOL)a0;
- (id)checkSystemAppsAvailability;
- (BOOL)currentProcessHasAppRecordEntitlement;
- (BOOL)currentProcessHasExtensionDiscoveryEntitlements;
- (id)defaultURL;
- (id)discoverInstalledExtensions;
- (BOOL)hasSameDiscoveredActivities:(id)a0 forCollaboration:(BOOL)a1;
- (BOOL)hasSameFinalItems:(id)a0 forActivityType:(id)a1 forCollaboration:(BOOL)a2;
- (BOOL)hasSamePlaceholderItems:(id)a0 forCollaboration:(BOOL)a1;
- (BOOL)hasSamePreconditions:(id)a0;
- (id)initWithItems:(id)a0 applicationBundleID:(id)a1 pid:(int)a2;
- (id)initWithJSONInfo:(id)a0;
- (id)jsonInfo;
- (id)modeKeyForCollaboration:(BOOL)a0;
- (id)modeSnapshotForCollaboration:(BOOL)a0;
- (void)updateFromSnapshot:(id)a0;
- (void)updateModeSnapshot:(id)a0 forCollaboration:(BOOL)a1;
- (void)updatePreconditionsIfNeeded;
- (void)updateWithDiscoveredShareActivities:(id)a0 visibleShareActivities:(id)a1 actionActivities:(id)a2 visibleActionActivities:(id)a3 forCollaboration:(BOOL)a4;
- (void)updateWithFinalItems:(id)a0 forActivityType:(id)a1 forCollaboration:(BOOL)a2;
- (void)updateWithPeopleSuggestionActivityTypes:(id)a0 forCollaboration:(BOOL)a1;
- (void)updateWithPlaceholderItems:(id)a0 collaborationItem:(id)a1 supportsCollaboration:(BOOL)a2 supportsSendCopy:(BOOL)a3;
- (void)writeSnapshotWithCompletionHandler:(id /* block */)a0;

@end
