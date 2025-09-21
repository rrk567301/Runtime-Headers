@class NSString;

@interface GEOAnalyticsDataFile : NSObject {
    char _forWrite;
    int _fd;
    struct { unsigned int header_magic; unsigned int header_len; } _hdr;
    struct iovec { void *iov_base; unsigned long long iov_len; } _iov[2];
    NSString *_filePath;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (void)commonInitWithMagic:(unsigned int)a0;
- (id)initForReadWithFileMagic:(unsigned int)a0 fileDescriptor:(int)a1;
- (id)initForReadWithFileMagic:(unsigned int)a0 filePath:(id)a1;
- (id)initForWriteWithFileMagic:(unsigned int)a0 filePath:(id)a1;
- (char)prepareFileWithFilePath:(id)a0 isForWrite:(char)a1;
- (int)unlinkAndReturnOpenFileDescriptor;
- (char)unsafe_readAnalyticDataWithVisitorBlock:(id /* block */)a0;
- (char)writeAnalyticData:(id)a0;

@end
