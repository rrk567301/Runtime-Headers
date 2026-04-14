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

- (id)filePath;
- (void)abort;
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)contentLength;
- (id)readDataOfLength:(unsigned long long)a0;
- (unsigned long long)offset;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0 forConnection:(id)a1;
- (BOOL)openFile;
- (BOOL)openFileIfNeeded;

@end
