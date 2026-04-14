@class NSString, HTTPConnection;

@interface HTTPFileResponse : NSObject <HTTPResponse> {
    HTTPConnection *connection;
    NSString *filePath;
    unsigned long long fileLength;
    unsigned long long fileOffset;
    BOOL aborted;
    int fileFD;
    void *buffer;
    unsigned long long bufferSize;
}

+ (void)initialize;

- (void)abort;
- (unsigned long long)contentLength;
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)readDataOfLength:(unsigned long long)a0;
- (id)filePath;
- (unsigned long long)offset;
- (void)dealloc;
- (id)initWithFilePath:(id)a0 forConnection:(id)a1;
- (BOOL)openFile;
- (BOOL)openFileIfNeeded;

@end
