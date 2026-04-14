@interface CDPUtilities : NSObject

@property (class, readonly) BOOL hasFullCDPSupport;
@property (class, readonly) BOOL isInternalBuild;
@property (class, readonly) BOOL isDemoDevice;
@property (class, readonly) BOOL isMultiUserManateeFeatureEnabled;
@property (class, readonly) BOOL canEnableMultiUserManatee;
@property (class, readonly) BOOL deferSOSFromSignIn;
@property (class, readonly) BOOL sosCompatibilityEnabled;
@property (class, readonly) BOOL useCDPContextSecretInsteadOfSBDSecretFeatureEnabled;
@property (class, readonly) BOOL isVirtualMachine;
@property (class, readonly) BOOL isCDPRepairWithProximityBasedPiggybackingEnabled;
@property (class, readonly, nonatomic) BOOL isSilentEscrowRecordViabilityRepairEnabled;
@property (class, readonly, nonatomic) BOOL isAudioAccessory;
@property (class, readonly, nonatomic) BOOL isKeyboardOOPEnabled;
@property (class, readonly, nonatomic) BOOL isKeyboardOOPiPadEnabled;
@property (class, readonly, nonatomic) BOOL isSilentBurnInMiniBuddyEnabled;
@property (class, readonly) BOOL isICSCHarmonizationEnabled;
@property (class, readonly, nonatomic) BOOL shouldCentralizeRPDFlow;
@property (class, readonly, nonatomic) BOOL shouldUseNewMacOSRPDFlow;
@property (class, readonly, nonatomic) BOOL shouldValidatePasscodeGenerations;
@property (class, readonly, nonatomic) BOOL shouldClearRKCacheAfterGeneration;
@property (class, readonly, nonatomic) BOOL isGuitarfishEnabled;
@property (class, readonly, nonatomic) BOOL isBuddyFinished;
@property (class, readonly, nonatomic) BOOL isSEPBasedICSCHealingEnabled;
@property (class, readonly, nonatomic) BOOL isNaturalUIEnabled;
@property (class, readonly, nonatomic) BOOL isSolariumEnabled;
@property (class, readonly, nonatomic) BOOL isADPInBuddyEnabled;

+ (void)isWalrusStatusMismatchDetectionEnabledWithCompletion:(id /* block */)a0;
+ (void)fetchRPDProbationDurationConfigsWithCompletion:(id /* block */)a0;
+ (BOOL)readPreferencesFor:(id)a0;
+ (void)isManateeNotificationOnFirstUnlockEnabledUsingURLBag:(id)a0 completion:(id /* block */)a1;
+ (BOOL)boolFromAKConfigurations:(id)a0;

@end
