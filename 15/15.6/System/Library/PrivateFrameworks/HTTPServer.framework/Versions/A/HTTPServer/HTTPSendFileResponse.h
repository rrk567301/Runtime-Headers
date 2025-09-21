@class NSString, NSFileHandle, HTTPConnection;

@interface HTTPSendFileResponse : NSObject <HTTPResponse> {
    HTTPConnection *connection;
    NSString *filePath;
    unsigned long long fileLength;
    unsigned long long fileOffset;
    char aborted;
    NSFileHandle *fileHandle;
}

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)filePath;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (void)abort;
- (char)isDone;
- (unsigned long long)contentLength;
- (id)initWithFilePath:(id)a0 forConnection:(id)a1;
- (char)openFile;
- (char)openFileIfNeeded;
- (id)readHTTPDataOfLength:(unsigned long long)a0 orLimit:(unsigned long long)a1;

@end
