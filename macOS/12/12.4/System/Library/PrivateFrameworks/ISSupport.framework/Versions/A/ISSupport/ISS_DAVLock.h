@interface ISS_DAVLock : ISS_DAVRequest

+ (id)lockRequestWithURL:(id)a0 owner:(id)a1;
+ (id)lockRequestWithSession:(id)a0 path:(id)a1 owner:(id)a2;
+ (id)relockRequestWithURL:(id)a0 lockToken:(id)a1;
+ (id)relockRequestWithSession:(id)a0 path:(id)a1 lockToken:(id)a2;

- (void)finalizeOperation;
- (id)lockToken;
- (int)lockTimeout;
- (id)dependenciesList;
- (id)initLockWithURL:(id)a0 owner:(id)a1;
- (id)initLockWithSession:(id)a0 path:(id)a1 owner:(id)a2;
- (void)_initLockRequestWithOwner:(id)a0;
- (id)initRelockWithURL:(id)a0 lockToken:(id)a1;
- (id)initRelockWithSession:(id)a0 path:(id)a1 lockToken:(id)a2;
- (void)_initRelockRequestWithToken:(id)a0;

@end
