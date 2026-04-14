@class ABPKSkeletonDefinition;

@interface ABPK2dSkeleton : NSObject {
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; void *__cap_; } _keypoints2d;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; void *__cap_; } _normalizedKeypoints2d;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _confidences;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; unsigned int *__cap_; } _visibility;
    BOOL _hasMissingJoints;
}

@property (readonly, nonatomic) long long skeletonType;
@property (readonly, nonatomic) ABPKSkeletonDefinition *skeletonDefinition;
@property (readonly, nonatomic) const void *keypoints2d;
@property (readonly, nonatomic) const void *normalizedKeypoints2d;
@property (readonly, nonatomic) const float *confidences;
@property (readonly, nonatomic) const unsigned int *visibility;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageRes;
@property (readonly, nonatomic) long long imageType;
@property (readonly, nonatomic) BOOL hasMissingJoints;

- (id)initWithType:(long long)a0;
- (id)init;
- (id)description;
- (id).cxx_construct;
- (id)toDictionary;
- (void).cxx_destruct;
- (void)computeBoundingBox;
- (int)overlaySkeletonOnImage:(SEL)a0 withResult:(struct __CVBuffer { } *)a1 withColor:(struct __CVBuffer { } *)a2;
- (void)printData;
- (void)setHasMissingJoints:(BOOL)a0;
- (void)setJointConfidences:(const float *)a0;
- (void)setJointVisibility:(const unsigned int *)a0;
- (void)setKeypoints2d:(const void *)a0 withImageRes:(struct CGSize { double x0; double x1; })a1;
- (void)setNormalizedKeypoints2d:(const void *)a0 withImageRes:(struct CGSize { double x0; double x1; })a1;

@end
