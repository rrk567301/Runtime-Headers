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
- (id)_readFileHeader;
- (char)_readCompletelyFromFd:(int)a0 length:(unsigned long long)a1;
- (char)_writeCompletelyToFd:(int)a0 buffer:(void *)a1 length:(unsigned long long)a2;
- (char)_writeDirectory:(id)a0;
- (char)_writeFile:(id)a0 toFileDescriptor:(int)a1;
- (char)_writeRegularFile:(id)a0;
- (id)initWithFileDescriptor:(int)a0 destination:(id)a1;
- (id)lastReadFile;
- (char)readWithDelegate:(id)a0;

@end
