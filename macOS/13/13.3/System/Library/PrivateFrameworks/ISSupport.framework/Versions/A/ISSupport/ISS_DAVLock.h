@interface ISS_DAVLock : ISS_DAVRequest

+ (id)relockRequestWithURL:(id)a0 lockToken:(id)a1;
+ (id)lockRequestWithSession:(id)a0 path:(id)a1 owner:(id)a2;
+ (id)lockRequestWithURL:(id)a0 owner:(id)a1;
+ (id)relockRequestWithSession:(id)a0 path:(id)a1 lockToken:(id)a2;

- (void)finalizeOperation;
- (id)initLockWithSession:(id)a0 path:(id)a1 owner:(id)a2;
- (void)_initLockRequestWithOwner:(id)a0;
- (void)_initRelockRequestWithToken:(id)a0;
- (id)dependenciesList;
- (id)initLockWithURL:(id)a0 owner:(id)a1;
- (id)initRelockWithSession:(id)a0 path:(id)a1 lockToken:(id)a2;
- (id)initRelockWithURL:(id)a0 lockToken:(id)a1;
- (int)lockTimeout;
- (id)lockToken;

@end
