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
+ (id)accessSpecifierForXPCConnection:(id)a0;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierForTask:(struct __SecTask { } *)a0 auditToken:(id)a1 sandboxCapabilities:(long long)a2;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierWithNoAccess;

- (BOOL)isRemovalService;
- (id)initWithSecTask:(struct __SecTask { } *)a0 auditToken:(id)a1 bundleIdentifier:(id)a2 associatedAppBundleIdentifier:(id)a3 entitlements:(long long)a4 sandboxCapabilities:(long long)a5;
- (BOOL)allowStepwiseExecution;
- (BOOL)allowShortcutImport;
- (BOOL)allowReadAccessForTriggers;
- (void)dealloc;
- (BOOL)isSettingsApp;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)allowReadAccessForSleepWorkflows;
- (BOOL)allowCustomShortcutRunning;
- (BOOL)allowReadAccessToShortcutsLibrary;
- (BOOL)isSpringBoard;
- (BOOL)allowHomeResidentShortcutRunning;
- (BOOL)allowIntentsExtensionDiscovery;
- (id)associatedAppBundleIdentifierFromBundleRecord;
- (BOOL)allowFullRuntimeAccess;
- (BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowVariableInjection;
- (BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (id)init;
- (BOOL)hasEntitlements:(long long)a0;
- (id)bundleIdentifierFromTask;
- (BOOL)allowResettingAutomationConfirmationLevel;
- (BOOL)hasSandboxCapabilities:(long long)a0;
- (BOOL)allowWriteAccessToVoiceShortcuts;
- (BOOL)allowReadAccessForDonations;
- (id)description;
- (BOOL)allowRunningTestHarnessTests;
- (BOOL)allowDropletCreation;
- (BOOL)allowWriteAccessForTriggers;
- (BOOL)isBackgroundShortcutRunner;
- (BOOL)allowWriteAccessForSleepWorkflows;
- (BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)a0;
- (BOOL)allowRootlessShortcutStorageAccess;
- (BOOL)allowConnection;
- (BOOL)allowReadAccessForContextualActions;
- (BOOL)allowUnrestrictedAccess;
- (BOOL)allowLinkContextualActionRunningForBundleIdentifier:(id)a0;
- (BOOL)allowReadAccessToPodcastsDatabase;
- (void).cxx_destruct;
- (BOOL)allowReadingOnScreenContent;

@end
