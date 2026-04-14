@interface ISS_DMDAVUnlock : ISS_DAVUnlock

+ (id)unlockRequestWithSession:(id)a0 URI:(id)a1 lockToken:(id)a2;

- (void)finalizeOperation;
- (id)initUnlockWithSession:(id)a0 URI:(id)a1 lockToken:(id)a2;

@end
