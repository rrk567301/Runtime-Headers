@interface DiskImageParamsUDIF_XPC : DiskImageParamsXPC {
    struct unique_ptr<udif::header, std::default_delete<udif::header>> { struct header *__ptr_; } _header;
}

+ (BOOL)supportsSecureCoding;

- (id)instanceID;
- (unsigned long long)blockSize;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)numBlocks;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct DiskImage *x0; })createSinkDiskImage;
- (id)initWithBackendXPC:(id)a0 header:(struct unique_ptr<udif::header, std::default_delete<udif::header>> { struct header *x0; })a1;
- (BOOL)isWritableFormat;

@end
