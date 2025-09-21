@interface IFDTargetController : NSObject

@property struct IFDTargetController_Private { id x0; char x1; char x2; char x3; char x4; id x5; id x6; id x7; id x8; id x9; char x10; int x11; char x12; int x13; id x14; } *privateController;

+ (void)initialize;
+ (void)_handleTargetRequests;

- (void)dealloc;
- (id)distribution;
- (void)_processQueue;
- (void)_volumeChanged:(id)a0;
- (id)installController;
- (id)volumeTargets;
- (char)waitUntilTargetProcessed:(id)a0;
- (void)_setVolumeTarget:(id)a0 forIdentifier:(id)a1;
- (void)_cacheReceiptInfoForTarget:(id)a0;
- (void)_gatherSystemVersionOnTarget:(id)a0;
- (id)_getVolumeTarget:(id)a0;
- (void)_noLongerAnticipatingVolumes:(id)a0;
- (char)_performVolumeTargetCheck:(id)a0 withCustomizationController:(id)a1;
- (void)_processInitialDisks;
- (void)_processVolumeTarget:(id)a0;
- (void)_processWholeDiskForIncompatibility:(id)a0;
- (void)_propagateStatusToAlternateLocations:(id)a0;
- (id)_targetsForDisk:(id)a0;
- (void)_volumeAppeared:(id)a0;
- (void)_volumeDisappeared:(id)a0;
- (char)allowsSubTargets;
- (int)availableInstallDomains;
- (id)defaultSubTargetPath;
- (id)dummyBlankTarget;
- (int)enabledInstallDomains;
- (id)initWithInstallController:(id)a0;
- (char)isAnticipatingMoreVolumes;
- (char)processTargetSync:(id)a0;
- (id)rootVolumeTarget;
- (void)setProcessRootVolumeOnly:(char)a0;
- (void)setProcessingEnabled:(char)a0;
- (char)stillProcessingTargets;
- (id)targetForDomain:(int)a0;
- (id)targetForSubPath:(id)a0 ofTarget:(id)a1;
- (char)validSubTargetLocationPath:(id)a0 forTarget:(id)a1;
- (id)volumeTargetAtPath:(id)a0;
- (char)waitUntilTargetFoundAtPath:(id)a0;
- (void)waitUntilTargetsFound;
- (char)waitUntilTargetsProcessed;

@end
