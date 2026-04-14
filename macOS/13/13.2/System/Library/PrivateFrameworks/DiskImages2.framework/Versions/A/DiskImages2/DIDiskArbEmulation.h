@interface DIDiskArbEmulation : DIDiskArb

- (BOOL)waitForDAIdleWithError:(id *)a0;
- (void)addDisappearedCallbackWithMountPoint:(id)a0 shadowMountPoints:(id)a1 delegate:(id)a2;
- (BOOL)ejectWithBSDName:(id)a0 error:(id *)a1;
- (BOOL)unmountWithMountPoint:(id)a0 error:(id *)a1;
- (id)copyDescriptionWithBSDName:(id)a0;

@end
