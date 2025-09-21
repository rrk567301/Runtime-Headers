@interface DiskImageParamsASIF_XPC : DiskImageParamsXPC {
    struct unique_ptr<di_asif::header, std::default_delete<di_asif::header>> { struct header *__ptr_; } _header;
}

+ (BOOL)supportsSecureCoding;

- (id)instanceID;
- (void)encodeWithCoder:(id)a0;
- (void)setHeader:(struct unique_ptr<di_asif::header, std::default_delete<di_asif::header>> { struct header *x0; })a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)numBlocks;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct DiskImage *x0; })createSinkDiskImage;
- (id)initWithBackendXPC:(id)a0 header:(struct unique_ptr<di_asif::header, std::default_delete<di_asif::header>> { struct header *x0; })a1;
- (BOOL)isSparseFormat;
- (BOOL)isWritableFormat;
- (BOOL)setBlockSize:(unsigned long long)a0 error:(id *)a1;
- (int)setSizeWithDiskImage:(void *)a0 newSize:(unsigned long long)a1;

@end
