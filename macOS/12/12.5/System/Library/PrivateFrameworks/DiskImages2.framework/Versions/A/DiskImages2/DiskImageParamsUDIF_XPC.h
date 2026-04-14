@interface DiskImageParamsUDIF_XPC : DiskImageParamsXPC {
    struct unique_ptr<udif::header, std::default_delete<udif::header>> { struct __compressed_pair<udif::header *, std::default_delete<udif::header>> { struct header *__value_; } __ptr_; } _header;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)blockSize;
- (id)instanceID;
- (BOOL)isWritableFormat;
- (unsigned long long)numBlocks;
- (id)initWithBackendXPC:(id)a0 header:(struct unique_ptr<udif::header, std::default_delete<udif::header>> { struct __compressed_pair<udif::header *, std::default_delete<udif::header>> { struct header *x0; } x0; })a1;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct __compressed_pair<DiskImage *, std::default_delete<DiskImage>> { struct DiskImage *x0; } x0; })createSinkDiskImage;

@end
