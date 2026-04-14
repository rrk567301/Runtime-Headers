@interface DiskImageParamsASIF_XPC : DiskImageParamsXPC {
    struct unique_ptr<di_asif::header, std::default_delete<di_asif::header>> { struct { struct header *__ptr_; } ; } _header;
}

+ (BOOL)supportsSecureCoding;

- (id)instanceID;
- (void)setHeader:(struct unique_ptr<di_asif::header, std::default_delete<di_asif::header>> { struct { struct header *x0; } x0; })a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)numBlocks;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct { struct DiskImage *x0; } x0; })createSinkDiskImage;
- (id)initWithBackendXPC:(id)a0 header:(struct unique_ptr<di_asif::header, std::default_delete<di_asif::header>> { struct { struct header *x0; } x0; })a1;
- (BOOL)isSparseFormat;
- (BOOL)isWritableFormat;
- (BOOL)setBlockSize:(unsigned long long)a0 error:(id *)a1;
- (int)setSizeWithDiskImage:(void *)a0 newSize:(unsigned long long)a1;

@end
