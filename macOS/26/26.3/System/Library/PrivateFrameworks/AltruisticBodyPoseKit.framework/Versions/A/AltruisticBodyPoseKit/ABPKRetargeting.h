@class NSUUID;

@interface ABPKRetargeting : NSObject {
    NSUUID *_skeletonIdentifier;
    struct CoreIKSolver { } *_coreIKSolver;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)processData:(id)a0;
- (id)_retargetSkeleton:(id)a0;

@end
