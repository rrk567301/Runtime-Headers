@interface MSUDataAccessorRestore : MSUDataAccessor

- (id)getVolumeWithUUID:(id)a0;
- (id)specialCaseAPTicketForRamdiskWithError:(id *)a0;
- (id)findVolumesWithRole:(int)a0;
- (id)copyPathForPersonalizedData:(int)a0 error:(id *)a1;
- (id)copyMountPointForVolumeType:(int)a0 error:(id *)a1;

@end
