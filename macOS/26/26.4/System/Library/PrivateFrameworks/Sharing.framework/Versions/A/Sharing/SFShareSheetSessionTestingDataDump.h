@class NSString, NSArray, NSDictionary, NSDate;

@interface SFShareSheetSessionTestingDataDump : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSString *applicationBundleID;
@property (readonly, nonatomic) int pid;
@property (copy, nonatomic) NSArray *installedExtensions;
@property (copy, nonatomic) NSDictionary *systemAppsAvailable;
@property (copy, nonatomic) NSDictionary *modeDataDumps;
@property (readonly, copy, nonatomic) NSArray *itemDescriptions;
@property (copy, nonatomic) NSString *testName;
@property (copy, nonatomic) NSString *testSuiteName;

+ (id)dateFormatter;
+ (id)descriptionForItem:(id)a0;
+ (id)_jsonifyItems:(id)a0;
+ (id)dataDumpsDirectory;
+ (id)loadDataDumpFromURL:(id)a0 error:(id *)a1;

- (id)filename;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
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
- (id)modeDataDumpForCollaboration:(BOOL)a0;
- (id)modeKeyForCollaboration:(BOOL)a0;
- (void)updateFromDataDump:(id)a0;
- (void)updateModeDataDump:(id)a0 forCollaboration:(BOOL)a1;
- (void)updatePreconditionsIfNeededWithReferenceDataDump:(id)a0;
- (void)updateWithDiscoveredShareActivities:(id)a0 visibleShareActivities:(id)a1 actionActivities:(id)a2 visibleActionActivities:(id)a3 forCollaboration:(BOOL)a4;
- (void)updateWithFinalItems:(id)a0 forActivityType:(id)a1 forCollaboration:(BOOL)a2;
- (void)updateWithPeopleSuggestionActivityTypes:(id)a0 forCollaboration:(BOOL)a1;
- (void)updateWithPlaceholderItems:(id)a0 collaborationItem:(id)a1 supportsCollaboration:(BOOL)a2 supportsSendCopy:(BOOL)a3;
- (void)writeDataDumpWithCompletionHandler:(id /* block */)a0;

@end
