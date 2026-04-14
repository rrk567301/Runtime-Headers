@class NSString;

@interface VCAccessSpecifier : NSObject <NSCopying>

@property (readonly, nonatomic) struct __SecTask { } *task;
@property (readonly, nonatomic) long long entitlements;
@property (readonly, nonatomic) long long sandboxCapabilities;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (void)initialize;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)a0;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierForCurrentConnection;
+ (id)accessSpecifierForXPCConnection:(id)a0;
+ (id)accessSpecifierForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)accessSpecifierForTask:(struct __SecTask { } *)a0 sandboxCapabilities:(long long)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isSpringBoard;
- (id)initWithSecTask:(struct __SecTask { } *)a0 bundleIdentifier:(id)a1 associatedAppBundleIdentifier:(id)a2 entitlements:(long long)a3 sandboxCapabilities:(long long)a4;
- (id)bundleIdentifierFromTask;
- (id)associatedAppBundleIdentifierFromBundleRecord;
- (BOOL)hasEntitlements:(long long)a0;
- (BOOL)hasSandboxCapabilities:(long long)a0;
- (BOOL)allowConnection;
- (BOOL)allowUnrestrictedAccess;
- (BOOL)allowWriteAccessToVoiceShortcuts;
- (BOOL)allowShortcutImport;
- (BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)a0;
- (BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowWriteAccessForTriggers;
- (BOOL)allowReadAccessForTriggers;
- (BOOL)allowReadAccessToShortcutsLibrary;
- (BOOL)allowReadAccessToPodcastsDatabase;
- (BOOL)allowBackgroundShortcutRunning;
- (BOOL)allowHomeResidentShortcutRunning;
- (BOOL)allowWriteAccessForSleepWorkflows;
- (BOOL)allowReadAccessForSleepWorkflows;
- (BOOL)allowReadAccessForDonations;
- (BOOL)isSettingsApp;
- (BOOL)isRemovalService;
- (BOOL)allowIntentsExtensionDiscovery;
- (BOOL)allowReadAccessForContextualActions;
- (BOOL)allowRootlessShortcutStorageAccess;
- (BOOL)allowReadingOnScreenContent;
- (BOOL)allowResettingAutomationConfirmationLevel;
- (BOOL)allowLaunchingBackgroundShortcutRunner;
- (BOOL)allowRunningTestHarnessTests;

@end
