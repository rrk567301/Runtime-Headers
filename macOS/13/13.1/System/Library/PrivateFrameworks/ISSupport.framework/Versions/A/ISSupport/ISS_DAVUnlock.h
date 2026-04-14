@interface ISS_DAVUnlock : ISS_DAVRequest

+ (id)unlockRequestWithURL:(id)a0 lockToken:(id)a1;
+ (id)unlockRequestWithSession:(id)a0 path:(id)a1 lockToken:(id)a2;

- (void)finalizeOperation;
- (void)_initUnlockForToken:(id)a0;
- (id)initUnlockWithURL:(id)a0 lockToken:(id)a1;
- (id)initUnlockWithSession:(id)a0 path:(id)a1 lockToken:(id)a2;

@end
