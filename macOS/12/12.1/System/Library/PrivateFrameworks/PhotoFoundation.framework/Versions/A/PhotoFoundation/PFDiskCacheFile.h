@class NSString, PFChecksum;

@interface PFDiskCacheFile : NSObject {
    PFChecksum *_checksum;
    NSString *_path;
    int _fd;
    struct stat { int st_dev; unsigned short st_mode; unsigned short st_nlink; unsigned long long st_ino; unsigned int st_uid; unsigned int st_gid; int st_rdev; struct timespec { long long tv_sec; long long tv_nsec; } st_atimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_mtimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_ctimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_birthtimespec; long long st_size; long long st_blocks; int st_blksize; unsigned int st_flags; unsigned int st_gen; int st_lspare; long long st_qspare[2]; } _statBuf;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_logError:(id)a0;
- (id)read:(int)a0;
- (id)_readObj:(int)a0 queue:(id)a1;
- (BOOL)_writeObj:(id)a0 queue:(id)a1;
- (void)_closeCacheFile;
- (struct { long long x0; struct PFChecksumBytes { unsigned char x0[16]; } x1; unsigned int x2; unsigned int x3; })_headerForFormat:(unsigned int)a0 checksum:(id)a1 formatSpecificData:(unsigned int)a2;
- (BOOL)_openCacheFileForRead;
- (BOOL)_openCacheFileForWrite;
- (BOOL)_readBytesIntoPtr:(void *)a0 length:(unsigned long long)a1;
- (BOOL)_readHeader:(struct { long long x0; struct PFChecksumBytes { unsigned char x0[16]; } x1; unsigned int x2; unsigned int x3; } *)a0;
- (BOOL)_swapTempFileIntoPlace;
- (BOOL)_writeBytesFromPtr:(const void *)a0 length:(unsigned long long)a1;
- (int)_writeHeaderForFormat:(unsigned int)a0 formatSpecificData:(unsigned int)a1;
- (BOOL)checkIntegrity:(long long)a0;
- (BOOL)deleteCacheFile;
- (id)initWithPath:(id)a0 checksum:(id)a1;
- (void)write:(id)a0 preparationBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;

@end
