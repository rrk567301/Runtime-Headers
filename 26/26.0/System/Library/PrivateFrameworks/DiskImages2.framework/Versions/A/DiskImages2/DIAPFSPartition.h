@interface DIAPFSPartition : DIDataPartition

- (unsigned long long)GPTTypeID;
- (BOOL)findVolumeBSDNameWithError:(id *)a0;
- (BOOL)formatWithVolumeName:(id)a0 error:(id *)a1;
- (unsigned long long)getFileSystemMinimalBlocks:(id *)a0;
- (id)mediaContentUUID;
- (id)newMountVolumeWithDiskArb:(id)a0 error:(id *)a1;
- (BOOL)resizeFileSystemWithNumBlocks:(unsigned long long)a0 error:(id *)a1;

@end
