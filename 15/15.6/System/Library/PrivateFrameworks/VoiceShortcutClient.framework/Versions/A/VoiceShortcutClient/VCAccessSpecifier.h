@class NSString, BSAuditToken;

@interface VCAccessSpecifier : NSObject <NSCopying>

@property (readonly, nonatomic) struct __SecTask { } *task;
@property (readonly, nonatomic) long long entitlements;
@property (readonly, nonatomic) long long sandboxCapabilities;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BSAuditToken *auditToken;

+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)accessSpecifierForCurrentConnection;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierForTask:(struct __SecTask { } *)a0 auditToken:(id)a1 sandboxCapabilities:(long long)a2;
+ (id)accessSpecifierForXPCConnection:(id)a0;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)isSpringBoard;
- (char)allowConnection;
- (char)allowCustomShortcutRunning;
- (char)allowDropletCreation;
- (char)allowFullRuntimeAccess;
- (char)allowHomeResidentShortcutRunning;
- (char)allowIntentsExtensionDiscovery;
- (char)allowLinkContextualActionRunningForBundleIdentifier:(id)a0;
- (char)allowReadAccessForContextualActions;
- (char)allowReadAccessForDonations;
- (char)allowReadAccessForSleepWorkflows;
- (char)allowReadAccessForTriggers;
- (char)allowReadAccessToPodcastsDatabase;
- (char)allowReadAccessToShortcutsLibrary;
- (char)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)a0;
- (char)allowReadAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (char)allowReadingOnScreenContent;
- (char)allowResettingAutomationConfirmationLevel;
- (char)allowRootlessShortcutStorageAccess;
- (char)allowRunningTestHarnessTests;
- (char)allowShortcutImport;
- (char)allowStepwiseExecution;
- (char)allowUnrestrictedAccess;
- (char)allowVariableInjection;
- (char)allowWriteAccessForSleepWorkflows;
- (char)allowWriteAccessForTriggers;
- (char)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (char)allowWriteAccessToVoiceShortcuts;
- (id)associatedAppBundleIdentifierFromBundleRecord;
- (id)bundleIdentifierFromTask;
- (char)hasEntitlements:(long long)a0;
- (char)hasSandboxCapabilities:(long long)a0;
- (id)initWithSecTask:(struct __SecTask { } *)a0 auditToken:(id)a1 bundleIdentifier:(id)a2 associatedAppBundleIdentifier:(id)a3 entitlements:(long long)a4 sandboxCapabilities:(long long)a5;
- (char)isBackgroundShortcutRunner;
- (char)isRemovalService;
- (char)isSettingsApp;

@end
