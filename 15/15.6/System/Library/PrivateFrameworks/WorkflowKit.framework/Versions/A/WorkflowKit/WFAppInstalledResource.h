@class NSString, INAppDescriptor, WFiTunesSessionManager, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, WFAppInstalledResourceDelegate;

@interface WFAppInstalledResource : WFResource <ICAppInstallStatusObserver>

@property (retain, nonatomic) WFiTunesSessionManager *currentAppNameLookupSessionManager;
@property (retain, nonatomic) NSMutableArray *pendingAppLookupCompletions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic) char skipLookup;
@property (nonatomic) char requiresAppToBeInstalled;
@property (nonatomic) char intentIsSynced;
@property (copy, nonatomic) NSString *appName;
@property (retain, nonatomic) INAppDescriptor *descriptor;
@property (weak, nonatomic) id<WFAppInstalledResourceDelegate> delegate;

+ (char)mustBeAvailableForDisplay;
+ (char)refreshesAvailabilityOnApplicationResume;

- (void)dealloc;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)eventDictionary;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 userInterface:(id)a2 completionHandler:(id /* block */)a3;
- (void)appRegistry:(id)a0 installStatusChangedForApp:(id)a1;
- (id)intentDescriptor;
- (void)notifyDelegateWithUpdatedDescriptor:(id)a0;
- (void)updateDescriptorsWithSelectedApp:(id)a0;
- (id)appNeedsUpdateErrorWithAppName:(id)a0;
- (id)_initWithDescriptor:(id)a0 requiresAppToBeInstalled:(char)a1 isSyncedFromOtherDevice:(char)a2;
- (char)appDescriptorOrAccompanyingExtensionIsInstalled:(id)a0;
- (id)appNotInstalledError;
- (id)appNotResolvedError;
- (char)descriptorIsIntentDescriptor;
- (void)fetchiTunesStoreObjectForAppWithCompletionBlock:(id /* block */)a0;
- (id)initWithAppDescriptor:(id)a0 requiresAppToBeInstalled:(char)a1;
- (id)initWithIntentDescriptor:(id)a0 isSyncedFromOtherDevice:(char)a1;
- (char)intentIsEligibleForRemoteExecution;
- (char)intentIsLocallyAvailable;
- (void)refreshAvailability;

@end
