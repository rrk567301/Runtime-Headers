@interface OSIPrepareVolumeElement : OSIInstallQueueElement

@property BOOL skipActivateVM;

+ (id)virtualMemoryFolderName;

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (void)_fixUpACLs;
- (BOOL)_enablePermissions;
- (BOOL)_enableJournalingOnDiskIfDiskAllowsJournaling;
- (BOOL)_activateVMOnDiskWithMountPoint:(id)a0;
- (void)_setSyrahBlackIfAppropriate;
- (id)_getBoardID;

@end
