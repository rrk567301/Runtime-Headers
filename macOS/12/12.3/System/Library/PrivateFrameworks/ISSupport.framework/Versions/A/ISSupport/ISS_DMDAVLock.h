@interface ISS_DMDAVLock : ISS_DAVLock {
    double _lockDuration;
}

+ (id)relockRequestWithSession:(id)a0 URI:(id)a1 lockToken:(id)a2 duration:(double)a3;
+ (id)lockRequestWithSession:(id)a0 URI:(id)a1 duration:(double)a2 owner:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initLockWithSession:(id)a0 URI:(id)a1 duration:(double)a2 owner:(id)a3;
- (id)initRelockWithSession:(id)a0 URI:(id)a1 lockToken:(id)a2 duration:(double)a3;
- (double)lockDuration;

@end
