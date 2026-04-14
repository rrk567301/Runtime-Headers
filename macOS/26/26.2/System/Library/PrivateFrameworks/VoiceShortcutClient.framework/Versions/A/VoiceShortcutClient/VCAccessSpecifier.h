@class NSString, BSAuditToken;

@interface VCAccessSpecifier : NSObject <NSCopying>

@property (readonly, nonatomic) struct __SecTask { } *task;
@property (readonly, nonatomic) long long entitlements;
@property (readonly, nonatomic) long long sandboxCapabilities;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BSAuditToken *auditToken;

+ (id)accessSpecifierForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)a0;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierForTask:(struct __SecTask { } *)a0 auditToken:(id)a1 sandboxCapabilities:(long long)a2;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierForXPCConnection:(id)a0;
+ (id)accessSpecifierForCurrentConnection;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;

- (BOOL)hasEntitlements:(long long)a0;
- (BOOL)allowReadAccessToShortcutsLibrary;
- (id)bundleIdentifierFromTask;
- (BOOL)allowStepwiseExecution;
- (BOOL)allowReadAccessToPodcastsDatabase;
- (BOOL)allowFullRuntimeAccess;
- (BOOL)allowReadingOnScreenContent;
- (BOOL)hasSandboxCapabilities:(long long)a0;
- (BOOL)allowFileBookmarksAccess;
- (id)associatedAppBundleIdentifierFromBundleRecord;
- (BOOL)allowHomeResidentShortcutRunning;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)allowWriteAccessToVoiceShortcuts;
- (BOOL)allowRootlessShortcutStorageAccess;
- (id)initWithSecTask:(struct __SecTask { } *)a0 auditToken:(id)a1 bundleIdentifier:(id)a2 associatedAppBundleIdentifier:(id)a3 entitlements:(long long)a4 sandboxCapabilities:(long long)a5;
- (BOOL)allowReadAccessForSleepWorkflows;
- (BOOL)allowDropletCreation;
- (void).cxx_destruct;
- (BOOL)allowWriteAccessForTriggers;
- (BOOL)isSettingsApp;
- (BOOL)allowWriteAccessForSleepWorkflows;
- (BOOL)allowConnection;
- (BOOL)allowUnrestrictedAccess;
- (id)description;
- (BOOL)allowRunningTestHarnessTests;
- (BOOL)allowReadAccessForDonations;
- (BOOL)allowReadAccessForContextualActions;
- (BOOL)allowShortcutImport;
- (BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowIntentsExtensionDiscovery;
- (BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)a0;
- (BOOL)isBackgroundShortcutRunner;
- (BOOL)allowCustomShortcutRunning;
- (BOOL)isRemovalService;
- (id)init;
- (BOOL)allowReadAccessForTriggers;
- (BOOL)isSpringBoard;
- (BOOL)allowVariableInjection;
- (BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowLinkContextualActionRunningForBundleIdentifier:(id)a0;
- (BOOL)allowResettingAutomationConfirmationLevel;
- (void)dealloc;

@end
