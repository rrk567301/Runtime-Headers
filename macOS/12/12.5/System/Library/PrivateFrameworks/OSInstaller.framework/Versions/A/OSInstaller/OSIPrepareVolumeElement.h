@interface OSIPrepareVolumeElement : OSIInstallQueueElement

@property BOOL skipActivateVM;

+ (id)virtualMemoryFolderName;

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (void)_setSyrahBlackIfAppropriate;
- (BOOL)_enablePermissions;
- (void)_fixUpACLs;
- (BOOL)_enableJournalingOnDiskIfDiskAllowsJournaling;
- (BOOL)_activateVMOnDiskWithMountPoint:(id)a0;
- (id)_getBoardID;

@end
