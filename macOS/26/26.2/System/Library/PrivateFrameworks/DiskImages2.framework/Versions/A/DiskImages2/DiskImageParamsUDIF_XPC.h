@interface DiskImageParamsUDIF_XPC : DiskImageParamsXPC {
    struct unique_ptr<udif::header, std::default_delete<udif::header>> { struct { struct header *__ptr_; } ; } _header;
}

+ (BOOL)supportsSecureCoding;

- (id)instanceID;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)blockSize;
- (unsigned long long)numBlocks;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct { struct DiskImage *x0; } x0; })createSinkDiskImage;
- (id)initWithBackendXPC:(id)a0 header:(struct unique_ptr<udif::header, std::default_delete<udif::header>> { struct { struct header *x0; } x0; })a1;
- (BOOL)isWritableFormat;

@end
