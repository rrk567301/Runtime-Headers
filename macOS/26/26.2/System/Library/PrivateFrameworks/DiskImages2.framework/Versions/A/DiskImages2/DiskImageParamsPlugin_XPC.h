@interface DiskImageParamsPlugin_XPC : DiskImageParamsXPC

+ (BOOL)supportsSecureCoding;

- (unsigned long long)numBlocks;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct { struct DiskImage *x0; } x0; })createSinkDiskImage;
- (BOOL)isWritableFormat;
- (BOOL)setBlockSize:(unsigned long long)a0 error:(id *)a1;

@end
