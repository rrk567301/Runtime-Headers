@class NSString;

@interface StreamingFileWriter : NSObject

@property (nonatomic) int currentOutputFD;
@property (readonly, nonatomic) long long fileSize;
@property (readonly, copy, nonatomic) NSString *path;

+ (id)fileWriterForPath:(id)a0 withOpenFlags:(int)a1 mode:(unsigned short)a2 quarantineInfo:(struct _qtn_file { } *)a3 performCachedWrites:(char)a4 expectedSize:(long long)a5 asyncTrackingGroup:(id)a6 errorDelegate:(id)a7 error:(id *)a8;
+ (id)synchronousFileWriterForPath:(id)a0 withOpenFlags:(int)a1 mode:(unsigned short)a2 quarantineInfo:(struct _qtn_file { } *)a3 performCachedWrites:(char)a4 error:(id *)a5;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)_initForWritingToPath:(id)a0 withOpenFlags:(int)a1 mode:(unsigned short)a2 quarantineInfo:(struct _qtn_file { } *)a3 performCachedWrites:(char)a4 expectedSize:(long long)a5 error:(id *)a6;
- (char)_openCurrentOutputFDForPath:(id)a0 withOpenFlags:(int)a1 mode:(unsigned short)a2 performCachedWrites:(char)a3 quarantineInfo:(struct _qtn_file { } *)a4 error:(id *)a5;
- (void)closeCurrentOutputFD;
- (void)configureFileAndSetOwnership:(char)a0 toUID:(unsigned int)a1 GID:(unsigned int)a2;
- (long long)currentOffsetWithError:(id *)a0;
- (char)finalizeFileWithAccessTime:(struct timeval { long long x0; int x1; })a0 modTime:(struct timeval { long long x0; int x1; })a1 mode:(unsigned short)a2 error:(id *)a3;
- (long long)readIntoBuffer:(void *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (char)setCurrentOffset:(long long)a0 error:(id *)a1;
- (void)setIncompleteExtractionAttribute;
- (char)suspendWithError:(id *)a0;
- (char)writeBuffer:(const void *)a0 length:(unsigned long long)a1 error:(id *)a2;

@end
