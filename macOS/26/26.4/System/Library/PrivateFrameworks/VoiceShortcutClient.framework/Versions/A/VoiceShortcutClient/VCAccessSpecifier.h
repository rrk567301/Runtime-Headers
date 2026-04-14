@class NSString, BSAuditToken;

@interface VCAccessSpecifier : NSObject <NSCopying>

@property (readonly, nonatomic) struct __SecTask { } *task;
@property (readonly, nonatomic) long long entitlements;
@property (readonly, nonatomic) long long sandboxCapabilities;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BSAuditToken *auditToken;

+ (id)accessSpecifierForTask:(struct __SecTask { } *)a0 auditToken:(id)a1 sandboxCapabilities:(long long)a2;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierForXPCConnection:(id)a0;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)a0;
+ (id)accessSpecifierForCurrentConnection;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)accessSpecifierUnrestricted;

- (BOOL)allowUnrestrictedAccess;
- (BOOL)allowVariableInjection;
- (BOOL)allowFileBookmarksAccess;
- (BOOL)isSettingsApp;
- (BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowHomeResidentShortcutRunning;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)allowIntentsExtensionDiscovery;
- (id)bundleIdentifierFromTask;
- (BOOL)allowRootlessShortcutStorageAccess;
- (BOOL)allowRunningTestHarnessTests;
- (BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)a0;
- (BOOL)allowLinkContextualActionRunningForBundleIdentifier:(id)a0;
- (BOOL)allowWriteAccessToVoiceShortcuts;
- (BOOL)allowReadAccessToPodcastsDatabase;
- (BOOL)allowShortcutImport;
- (BOOL)allowReadAccessForContextualActions;
- (BOOL)allowWriteAccessForTriggers;
- (BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowReadingOnScreenContent;
- (BOOL)allowReadAccessForDonations;
- (void).cxx_destruct;
- (BOOL)allowConnection;
- (BOOL)allowResettingAutomationConfirmationLevel;
- (BOOL)allowRemoteExecutionRequest;
- (BOOL)allowReadAccessToShortcutsLibrary;
- (id)init;
- (BOOL)allowWriteAccessForSleepWorkflows;
- (BOOL)hasEntitlements:(long long)a0;
- (BOOL)hasSandboxCapabilities:(long long)a0;
- (BOOL)isRemovalService;
- (id)description;
- (BOOL)allowCustomShortcutRunning;
- (BOOL)allowFullRuntimeAccess;
- (BOOL)allowReadAccessForTriggers;
- (BOOL)allowStepwiseExecution;
- (void)dealloc;
- (id)initWithSecTask:(struct __SecTask { } *)a0 auditToken:(id)a1 bundleIdentifier:(id)a2 associatedAppBundleIdentifier:(id)a3 entitlements:(long long)a4 sandboxCapabilities:(long long)a5;
- (BOOL)allowDropletCreation;
- (BOOL)isSpringBoard;
- (BOOL)isBackgroundShortcutRunner;
- (BOOL)allowReadAccessForSleepWorkflows;
- (id)associatedAppBundleIdentifierFromBundleRecord;

@end
