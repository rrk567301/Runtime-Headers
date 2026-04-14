@interface VKObjectBoundsContext : NSObject {
    struct vector<gm::Matrix<double, 2, 1>, std::allocator<gm::Matrix<double, 2, 1>>> { void *__begin_; void *__end_; void *__cap_; } _points;
}

@property (nonatomic) struct VKEdgeInsets { float top; float left; float bottom; float right; } edgePadding;

- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })boundingRect;
- (BOOL)isEmpty;
- (void)addPoints:(const void *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
