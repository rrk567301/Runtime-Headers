@interface OSIPrepareVolumeElement : OSIInstallQueueElement

@property char skipActivateVM;

+ (id)virtualMemoryFolderName;

- (id)operationName;
- (char)runReturningError:(id *)a0;
- (char)_activateVMOnDiskWithMountPoint:(id)a0;
- (char)_enableJournalingOnDiskIfDiskAllowsJournaling;
- (char)_enablePermissions;
- (void)_fixUpACLs;
- (id)_getBoardID;
- (void)_setSyrahBlackIfAppropriate;
- (double)estimatedTimeToComplete;

@end
