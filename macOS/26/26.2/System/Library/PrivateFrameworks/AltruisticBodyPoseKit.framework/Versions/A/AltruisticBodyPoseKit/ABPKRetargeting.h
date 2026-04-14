@class NSUUID;

@interface ABPKRetargeting : NSObject {
    NSUUID *_skeletonIdentifier;
    struct CoreIKSolver { } *_coreIKSolver;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)processData:(id)a0;
- (id)_retargetSkeleton:(id)a0;

@end
