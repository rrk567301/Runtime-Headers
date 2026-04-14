@interface IFDTargetController : NSObject

@property struct IFDTargetController_Private { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; id x5; id x6; id x7; id x8; id x9; BOOL x10; int x11; BOOL x12; int x13; id x14; } *privateController;

+ (void)initialize;
+ (void)_handleTargetRequests;

- (void)dealloc;
- (id)distribution;
- (void)_processQueue;
- (void)_volumeChanged:(id)a0;
- (id)installController;
- (BOOL)waitUntilTargetProcessed:(id)a0;
- (id)volumeTargets;
- (id)volumeTargetAtPath:(id)a0;
- (int)availableInstallDomains;
- (int)enabledInstallDomains;
- (id)initWithInstallController:(id)a0;
- (void)setProcessingEnabled:(BOOL)a0;
- (void)setProcessRootVolumeOnly:(BOOL)a0;
- (void)_volumeAppeared:(id)a0;
- (id)_getVolumeTarget:(id)a0;
- (void)_processVolumeTarget:(id)a0;
- (void)waitUntilTargetsFound;
- (BOOL)stillProcessingTargets;
- (id)dummyBlankTarget;
- (BOOL)waitUntilTargetFoundAtPath:(id)a0;
- (id)_targetsForDisk:(id)a0;
- (void)_volumeDisappeared:(id)a0;
- (void)_noLongerAnticipatingVolumes:(id)a0;
- (void)_processInitialDisks;
- (id)rootVolumeTarget;
- (BOOL)processTargetSync:(id)a0;
- (BOOL)waitUntilTargetsProcessed;
- (BOOL)isAnticipatingMoreVolumes;
- (BOOL)allowsSubTargets;
- (id)defaultSubTargetPath;
- (BOOL)validSubTargetLocationPath:(id)a0 forTarget:(id)a1;
- (id)targetForSubPath:(id)a0 ofTarget:(id)a1;
- (void)_cacheReceiptInfoForTarget:(id)a0;
- (id)targetForDomain:(int)a0;
- (void)_processWholeDiskForIncompatibility:(id)a0;
- (void)_setVolumeTarget:(id)a0 forIdentifier:(id)a1;
- (void)_gatherSystemVersionOnTarget:(id)a0;
- (BOOL)_performVolumeTargetCheck:(id)a0 withCustomizationController:(id)a1;
- (void)_propagateStatusToAlternateLocations:(id)a0;

@end
