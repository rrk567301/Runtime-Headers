@class NSString, XMFile;
@protocol SMWindowsArchiveStreamDelegate;

@interface XMArchiveStream : NSObject {
    int _inputFd;
    NSString *_destination;
    void *_buffer;
    unsigned long long _writtenLength;
    id<SMWindowsArchiveStreamDelegate> _delegate;
    XMFile *_lastReadFile;
}

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFileDescriptor:(int)a0 destination:(id)a1;
- (BOOL)readWithDelegate:(id)a0;
- (id)lastReadFile;
- (BOOL)_writeCompletelyToFd:(int)a0 buffer:(void *)a1 length:(unsigned long long)a2;
- (id)_readFileHeader;
- (BOOL)_writeDirectory:(id)a0;
- (BOOL)_writeRegularFile:(id)a0;
- (BOOL)_writeFile:(id)a0 toFileDescriptor:(int)a1;
- (BOOL)_readCompletelyFromFd:(int)a0 length:(unsigned long long)a1;

@end
