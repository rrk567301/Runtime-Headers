@class NSString, BSAuditToken;

@interface VCAccessSpecifier : NSObject <NSCopying>

@property (readonly, nonatomic) struct __SecTask { } *task;
@property (readonly, nonatomic) long long entitlements;
@property (readonly, nonatomic) long long sandboxCapabilities;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BSAuditToken *auditToken;

+ (id)accessSpecifierForCurrentConnection;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)a0;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)accessSpecifierForXPCConnection:(id)a0;
+ (id)accessSpecifierForTask:(struct __SecTask { } *)a0 auditToken:(id)a1 sandboxCapabilities:(long long)a2;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;

- (BOOL)allowConnection;
- (BOOL)allowStepwiseExecution;
- (BOOL)allowDropletCreation;
- (BOOL)isSpringBoard;
- (BOOL)hasEntitlements:(long long)a0;
- (id)initWithSecTask:(struct __SecTask { } *)a0 auditToken:(id)a1 bundleIdentifier:(id)a2 associatedAppBundleIdentifier:(id)a3 entitlements:(long long)a4 sandboxCapabilities:(long long)a5;
- (BOOL)allowReadAccessForDonations;
- (BOOL)allowVariableInjection;
- (BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)isSettingsApp;
- (id)description;
- (BOOL)allowFullRuntimeAccess;
- (BOOL)allowRootlessShortcutStorageAccess;
- (BOOL)allowReadingOnScreenContent;
- (id)init;
- (BOOL)allowWriteAccessToVoiceShortcuts;
- (BOOL)allowIntentsExtensionDiscovery;
- (BOOL)allowResettingAutomationConfirmationLevel;
- (BOOL)isBackgroundShortcutRunner;
- (BOOL)allowReadAccessToPodcastsDatabase;
- (BOOL)allowUnrestrictedAccess;
- (void).cxx_destruct;
- (BOOL)allowCustomShortcutRunning;
- (id)associatedAppBundleIdentifierFromBundleRecord;
- (BOOL)allowReadAccessToShortcutsLibrary;
- (BOOL)allowReadAccessForTriggers;
- (BOOL)hasSandboxCapabilities:(long long)a0;
- (BOOL)allowFileBookmarksAccess;
- (BOOL)allowWriteAccessForSleepWorkflows;
- (BOOL)allowLinkContextualActionRunningForBundleIdentifier:(id)a0;
- (void)dealloc;
- (BOOL)allowShortcutImport;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)allowReadAccessForContextualActions;
- (BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)a0;
- (BOOL)allowHomeResidentShortcutRunning;
- (BOOL)allowReadAccessForSleepWorkflows;
- (id)bundleIdentifierFromTask;
- (BOOL)allowRemoteExecutionRequest;
- (BOOL)allowWriteAccessForTriggers;
- (BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)isRemovalService;
- (BOOL)allowRunningTestHarnessTests;

@end
