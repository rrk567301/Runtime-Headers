@interface PFDiskCacheFile_PFPurgeableData : PFDiskCacheFile

- (BOOL)_readFileFormatHeader:(struct { long long x0; long long x1; } *)a0;
- (id)_readObj:(int)a0 queue:(id)a1;
- (BOOL)_writeObj:(id)a0 queue:(id)a1;
- (BOOL)_writePurgeableData:(id)a0 queue:(id)a1;
- (BOOL)_writeNSData:(id)a0 queue:(id)a1;

@end
