@interface DiskImageParamsRaw_XPC : DiskImageParamsXPC

+ (BOOL)supportsSecureCoding;

- (unsigned long long)numBlocks;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct DiskImage *x0; })createSinkDiskImage;
- (BOOL)isSparseFormat;
- (BOOL)isWritableFormat;

@end
