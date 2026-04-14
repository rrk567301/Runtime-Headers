@interface DiskImageParamsAEA_XPC : DiskImageParamsXPC {
    struct shared_ptr<unsigned char> { char *__ptr_; struct __shared_weak_count *__cntrl_; } _key;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct __compressed_pair<DiskImage *, std::default_delete<DiskImage>> { struct DiskImage *x0; } x0; })createSinkDiskImage;
- (BOOL)isWritableFormat;
- (unsigned long long)numBlocks;
- (id)initWithBackendXPC:(id)a0 key:(struct shared_ptr<unsigned char> { char *x0; struct __shared_weak_count *x1; })a1;

@end
