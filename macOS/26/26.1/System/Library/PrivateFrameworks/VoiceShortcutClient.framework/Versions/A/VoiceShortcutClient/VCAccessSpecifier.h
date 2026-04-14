@class NSString, BSAuditToken;

@interface VCAccessSpecifier : NSObject <NSCopying>

@property (readonly, nonatomic) struct __SecTask { } *task;
@property (readonly, nonatomic) long long entitlements;
@property (readonly, nonatomic) long long sandboxCapabilities;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BSAuditToken *auditToken;

+ (id)accessSpecifierForXPCConnection:(id)a0;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierForCurrentConnection;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierForTask:(struct __SecTask { } *)a0 auditToken:(id)a1 sandboxCapabilities:(long long)a2;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)a0;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;

- (BOOL)allowWriteAccessForTriggers;
- (BOOL)allowReadAccessForSleepWorkflows;
- (BOOL)allowFullRuntimeAccess;
- (BOOL)hasEntitlements:(long long)a0;
- (BOOL)allowConnection;
- (BOOL)allowHomeResidentShortcutRunning;
- (BOOL)allowStepwiseExecution;
- (BOOL)hasSandboxCapabilities:(long long)a0;
- (BOOL)allowDropletCreation;
- (BOOL)allowCustomShortcutRunning;
- (BOOL)allowFileBookmarksAccess;
- (BOOL)allowReadAccessToShortcutsLibrary;
- (BOOL)isSettingsApp;
- (BOOL)allowRootlessShortcutStorageAccess;
- (BOOL)allowVariableInjection;
- (BOOL)allowShortcutImport;
- (id)initWithSecTask:(struct __SecTask { } *)a0 auditToken:(id)a1 bundleIdentifier:(id)a2 associatedAppBundleIdentifier:(id)a3 entitlements:(long long)a4 sandboxCapabilities:(long long)a5;
- (BOOL)allowWriteAccessForSleepWorkflows;
- (id)associatedAppBundleIdentifierFromBundleRecord;
- (BOOL)allowIntentsExtensionDiscovery;
- (BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)a0;
- (BOOL)isBackgroundShortcutRunner;
- (BOOL)allowWriteAccessToVoiceShortcuts;
- (BOOL)allowReadAccessForDonations;
- (id)description;
- (BOOL)isSpringBoard;
- (BOOL)allowReadingOnScreenContent;
- (BOOL)allowReadAccessForTriggers;
- (void)dealloc;
- (BOOL)allowReadAccessToPodcastsDatabase;
- (id)bundleIdentifierFromTask;
- (void).cxx_destruct;
- (BOOL)allowResettingAutomationConfirmationLevel;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isRemovalService;
- (BOOL)allowRunningTestHarnessTests;
- (BOOL)allowUnrestrictedAccess;
- (BOOL)allowReadAccessForContextualActions;
- (BOOL)allowLinkContextualActionRunningForBundleIdentifier:(id)a0;
- (id)init;
- (BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)a0;

@end
