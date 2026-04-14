@interface DIImageHandle : NSObject {
    struct unique_ptr<diskimage_uio::diskimage, std::default_delete<diskimage_uio::diskimage>> { struct diskimage *__ptr_; } _diskImage;
    struct vector<std::shared_ptr<LockableResource>, std::allocator<std::shared_ptr<LockableResource>>> { void *__begin_; void *__end_; void *__cap_; } _lockableResources;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDiskImage:(void *)a0 lockableResources:(const void *)a1;
- (struct expected<std::unique_ptr<diskimage_uio::diskimage>, std::error_code> { union storage<std::unique_ptr<diskimage_uio::diskimage>, std::error_code> { char x0; struct unique_ptr<diskimage_uio::diskimage, std::default_delete<diskimage_uio::diskimage>> { struct diskimage *x0; } x1; struct error_code { int x0; struct error_category *x1; } x2; } x0; BOOL x1; })moveDiskImage;

@end
