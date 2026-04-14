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

- (id)readDataOfLength:(unsigned long long)a0;
- (void)setOffset:(unsigned long long)a0;
- (BOOL)isDone;
- (id)filePath;
- (void)abort;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFilePath:(id)a0 forConnection:(id)a1;
- (BOOL)openFile;
- (BOOL)openFileIfNeeded;

@end
