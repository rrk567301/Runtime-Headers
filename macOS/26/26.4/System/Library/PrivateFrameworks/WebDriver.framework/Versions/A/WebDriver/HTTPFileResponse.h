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
- (void)abort;
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (unsigned long long)contentLength;
- (id)filePath;
- (void).cxx_destruct;
- (unsigned long long)offset;
- (void)dealloc;
- (id)initWithFilePath:(id)a0 forConnection:(id)a1;
- (BOOL)openFile;
- (BOOL)openFileIfNeeded;

@end
