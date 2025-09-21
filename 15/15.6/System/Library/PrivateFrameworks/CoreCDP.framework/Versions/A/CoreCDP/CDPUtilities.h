@interface CDPUtilities : NSObject

@property (class, readonly) char hasFullCDPSupport;
@property (class, readonly) char isInternalBuild;
@property (class, readonly) char isDemoDevice;
@property (class, readonly) char isMultiUserManateeFeatureEnabled;
@property (class, readonly) char canEnableMultiUserManatee;
@property (class, readonly) char deferSOSFromSignIn;
@property (class, readonly) char useCDPContextSecretInsteadOfSBDSecretFeatureEnabled;
@property (class, readonly) char isVirtualMachine;
@property (class, readonly) char isCDPRepairWithProximityBasedPiggybackingEnabled;
@property (class, readonly, nonatomic) char isSilentEscrowRecordViabilityRepairEnabled;
@property (class, readonly, nonatomic) char isAudioAccessory;
@property (class, readonly, nonatomic) char isKeyboardOOPEnabled;
@property (class, readonly, nonatomic) char isKeyboardOOPiPadEnabled;
@property (class, readonly, nonatomic) char isSilentBurnInMiniBuddyEnabled;
@property (class, readonly) char isICSCHarmonizationEnabled;
@property (class, readonly, nonatomic) char shouldCentralizeRPDFlow;
@property (class, readonly, nonatomic) char shouldUseNewMacOSRPDFlow;
@property (class, readonly, nonatomic) char shouldValidatePasscodeGenerations;
@property (class, readonly, nonatomic) char shouldClearRKCacheAfterGeneration;
@property (class, readonly, nonatomic) char isGuitarfishEnabled;
@property (class, readonly, nonatomic) char isBuddyFinished;

+ (char)boolFromAKConfigurations:(id)a0;
+ (void)isWalrusStatusMismatchDetectionEnabledWithCompletion:(id /* block */)a0;
+ (char)readPreferencesFor:(id)a0;

@end
