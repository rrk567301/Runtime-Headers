@class NSObject;
@protocol OS_os_log;

@interface PXStoryAutoEditDurationConstraintSolver : NSObject {
    NSObject<OS_os_log> *_log;
    struct vector<PFStoryDurationInfo, std::allocator<PFStoryDurationInfo>> { struct *__begin_; struct *__end_; struct __compressed_pair<PFStoryDurationInfo *, std::allocator<PFStoryDurationInfo>> { struct *__value_; } __end_cap_; } _infos;
    struct vector<PFStoryDurationInfo, std::allocator<PFStoryDurationInfo>> { struct *__begin_; struct *__end_; struct __compressed_pair<PFStoryDurationInfo *, std::allocator<PFStoryDurationInfo>> { struct *__value_; } __end_cap_; } _solveResults;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; } originalOverallDurationInfo;
@property (readonly, nonatomic) struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; } constrainedOverallDurationInfo;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })constrainedDurationInfoAtIndex:(unsigned long long)a0;
- (void)addClipWithDurationInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })a0;
- (id)diagnosticSwiftCodeForDurationUnitTestNamed:(id)a0 maximumDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)diagnosticSwiftCodeForDurationUnitTestNamed:(id)a0 preferredDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })originalDurationInfoAtIndex:(unsigned long long)a0;
- (char)solveForMaximumDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (char)solveForPreferredDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
