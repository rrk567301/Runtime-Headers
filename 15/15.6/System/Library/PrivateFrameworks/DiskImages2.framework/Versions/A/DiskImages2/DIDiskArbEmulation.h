@interface DIDiskArbEmulation : DIDiskArb

- (void)stop;
- (void)addDisappearedCallbackWithMountPoint:(id)a0 shadowMountPoints:(id)a1 delegate:(id)a2;
- (id)copyDescriptionWithBSDName:(id)a0;
- (char)ejectWithBSDName:(id)a0 error:(id *)a1;
- (char)mountWithDeviceName:(id)a0 args:(id)a1 filesystem:(id)a2 mountURL:(id)a3 error:(id *)a4;
- (char)unmountWithMountPoint:(id)a0 error:(id *)a1;
- (char)waitForDAIdleWithError:(id *)a0;

@end
